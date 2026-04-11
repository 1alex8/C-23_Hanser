// ============================================================
//  filesystem_beispiel.cpp
//  Demonstriert die wichtigsten Funktionen von <filesystem>
//  Kompilieren: g++ -std=c++17 filesystem_beispiel.cpp -o fs_demo
// ============================================================

#include <filesystem>   // Hauptheader – nur einbinden wenn wirklich nötig
#include <fstream>      // Zum Erstellen von Testdateien
#include <iostream>
#include <string>

// Alias für den langen Namespace-Namen – übliche Konvention
namespace fs = std::filesystem;


// ------------------------------------------------------------
//  Hilfsfunktion: Erstellt eine Datei mit Beispielinhalt
// ------------------------------------------------------------
void datei_erstellen(const fs::path& pfad, const std::string& inhalt) {
    std::ofstream datei(pfad);
    datei << inhalt;
    // std::ofstream kommt aus <fstream>, nicht aus <filesystem>.
    // <filesystem> öffnet keine Dateien – es verwaltet nur Pfade & Metadaten.
}


// ------------------------------------------------------------
//  1. Pfade zusammenbauen mit fs::path
// ------------------------------------------------------------
void pfad_beispiele() {
    std::cout << "\n--- 1. Pfad-Operationen ---\n";

    fs::path p = "projekte/cpp/src/main.cpp";

    // path zerlegt den Pfad automatisch in seine Bestandteile
    std::cout << "Voller Pfad   : " << p            << "\n";
    std::cout << "Elternverz.   : " << p.parent_path()  << "\n";  // projekte/cpp/src
    std::cout << "Dateiname     : " << p.filename()     << "\n";  // main.cpp
    std::cout << "Stamm (stem)  : " << p.stem()         << "\n";  // main  (ohne Extension)
    std::cout << "Erweiterung   : " << p.extension()    << "\n";  // .cpp

    // Pfade mit / verknüpfen – funktioniert auf Windows & Linux gleich
    fs::path basis  = "projekte";
    fs::path gesamt = basis / "cpp" / "include" / "utils.h";
    std::cout << "Verketteter Pfad: " << gesamt << "\n";
}


// ------------------------------------------------------------
//  2. Verzeichnisse anlegen & prüfen
// ------------------------------------------------------------
void verzeichnis_beispiele(const fs::path& arbeitsverz) {
    std::cout << "\n--- 2. Verzeichnisse ---\n";

    fs::path unterordner = arbeitsverz / "src" / "utils";

    // create_directories legt auch fehlende Zwischenordner an (wie mkdir -p)
    // Ohne <filesystem> müsste man OS-spezifische Funktionen (mkdir, CreateDirectory) nutzen
    fs::create_directories(unterordner);
    std::cout << "Erstellt: " << unterordner << "\n";

    // exists() prüft ob ein Pfad existiert (Datei oder Verzeichnis)
    if (fs::exists(unterordner))
        std::cout << "Verzeichnis existiert: ja\n";

    // is_directory() unterscheidet Ordner von Dateien
    std::cout << "Ist Verzeichnis: " << std::boolalpha << fs::is_directory(unterordner) << "\n";
}


// ------------------------------------------------------------
//  3. Dateien anlegen, Metadaten lesen
// ------------------------------------------------------------
void datei_beispiele(const fs::path& arbeitsverz) {
    std::cout << "\n--- 3. Datei-Metadaten ---\n";

    fs::path datei = arbeitsverz / "src" / "main.cpp";
    datei_erstellen(datei, "#include <iostream>\nint main(){}\n");

    // exists() + is_regular_file() – defensiv prüfen bevor man Metadaten abfragt
    if (fs::exists(datei) && fs::is_regular_file(datei)) {

        // file_size() gibt die Größe in Bytes zurück – ohne die Datei zu öffnen!
        // Genau das ist der Vorteil von <filesystem>: Metadaten ohne <fstream>
        std::cout << "Dateigröße    : " << fs::file_size(datei) << " Bytes\n";

        // last_write_time() liefert den Zeitstempel der letzten Änderung
        auto zeit = fs::last_write_time(datei);
        // Direkte Ausgabe des Zeitstempels (plattformabhängiges Format)
        std::cout << "Letzter Schreibzugriff: " << zeit.time_since_epoch().count() << " (Ticks)\n";
    }

    // Datei kopieren – plattformunabhängig, kein <cstdio> nötig
    fs::path kopie = arbeitsverz / "src" / "main_backup.cpp";
    fs::copy_file(datei, kopie, fs::copy_options::overwrite_existing);
    std::cout << "Kopie erstellt: " << kopie.filename() << "\n";
}


// ------------------------------------------------------------
//  4. Verzeichnis-Iteration (flach & rekursiv)
// ------------------------------------------------------------
void iteration_beispiele(const fs::path& arbeitsverz) {
    std::cout << "\n--- 4. Verzeichnis-Iteration ---\n";

    // Weitere Testdateien anlegen
    datei_erstellen(arbeitsverz / "src" / "utils" / "helper.cpp", "// helper\n");
    datei_erstellen(arbeitsverz / "src" / "utils" / "helper.h",   "// header\n");
    datei_erstellen(arbeitsverz / "readme.txt",                    "Projektbeschreibung\n");

    // -- Flache Iteration: nur eine Ebene tief --
    std::cout << "\nInhalt von '" << arbeitsverz << "' (flach):\n";
    for (const fs::directory_entry& eintrag : fs::directory_iterator(arbeitsverz)) {
        // directory_entry enthält Pfad + gecachte Metadaten (kein Extra-Syscall nötig)
        std::cout << "  " << (eintrag.is_directory() ? "[DIR] " : "[FIL] ")
                  << eintrag.path().filename() << "\n";
    }

    // -- Rekursive Iteration: alle Unterordner --
    std::cout << "\nAlle .cpp-Dateien (rekursiv):\n";
    for (const fs::directory_entry& eintrag
         : fs::recursive_directory_iterator(arbeitsverz)) {

        // extension() macht den Filter plattformunabhängig (Windows wäre .CPP gleich .cpp je nach FS)
        if (eintrag.is_regular_file() && eintrag.path().extension() == ".cpp") {
            std::cout << "  " << eintrag.path() << "  ("
                      << fs::file_size(eintrag.path()) << " B)\n";
        }
    }
}


// ------------------------------------------------------------
//  5. Umbenennen & Löschen
// ------------------------------------------------------------
void umbenennen_loeschen(const fs::path& arbeitsverz) {
    std::cout << "\n--- 5. Umbenennen & Löschen ---\n";

    fs::path alt = arbeitsverz / "src" / "main_backup.cpp";
    fs::path neu = arbeitsverz / "src" / "main_v1.cpp";

    // rename() funktioniert für Dateien UND Verzeichnisse
    fs::rename(alt, neu);
    std::cout << "Umbenannt: " << alt.filename() << " -> " << neu.filename() << "\n";

    // remove() löscht eine einzelne Datei
    fs::remove(neu);
    std::cout << "Gelöscht : " << neu.filename() << "\n";

    // remove_all() löscht ein Verzeichnis rekursiv (wie rm -rf)
    // Gibt die Anzahl der gelöschten Einträge zurück
    auto anzahl = fs::remove_all(arbeitsverz);
    std::cout << "Aufgeräumt: " << anzahl << " Einträge gelöscht\n";
}


// ------------------------------------------------------------
//  6. Fehlerbehandlung ohne Exceptions (mit error_code)
// ------------------------------------------------------------
void fehlerbehandlung_beispiel() {
    std::cout << "\n--- 6. Fehlerbehandlung ---\n";

    fs::path nicht_vorhanden = "/dieser/pfad/existiert/nicht";
    std::error_code ec;  // Fehlerstatus-Objekt

    // Viele <filesystem>-Funktionen haben eine Überladung mit error_code&.
    // Diese Variante wirft KEINE Exception – sinnvoll in performancekritischem Code.
    auto groesse = fs::file_size(nicht_vorhanden, ec);

    if (ec) {
        // ec.message() liefert eine lesbare Fehlerbeschreibung vom OS
        std::cout << "Fehler (kein Exception-Overhead): " << ec.message() << "\n";
    } else {
        std::cout << "Größe: " << groesse << "\n";
    }
}


// ------------------------------------------------------------
//  7. Temporäres Verzeichnis – nützlich für Tests & Caches
// ------------------------------------------------------------
fs::path temp_verz_erstellen() {
    // temp_directory_path() gibt das systemweite Temp-Verzeichnis zurück
    // (/tmp auf Linux, C:\Users\...\AppData\Local\Temp auf Windows)
    fs::path tmp = fs::temp_directory_path() / "fs_demo_workspace";
    fs::create_directories(tmp);
    std::cout << "\nArbeitsverzeichnis: " << fs::absolute(tmp) << "\n";

    // absolute() löst relative Pfade zu absoluten auf – wichtig für Logging & Debugging
    return tmp;
}


// ------------------------------------------------------------
//  main
// ------------------------------------------------------------
int main() {
    std::cout << "=== std::filesystem Beispielprogramm ===\n";

    // Temporäres Arbeitsverzeichnis für alle Demo-Operationen
    fs::path arbeitsverz = temp_verz_erstellen();

    pfad_beispiele();
    verzeichnis_beispiele(arbeitsverz);
    datei_beispiele(arbeitsverz);
    iteration_beispiele(arbeitsverz);
    umbenennen_loeschen(arbeitsverz);
    fehlerbehandlung_beispiel();

    std::cout << "\n=== Fertig ===\n";
    return 0;
}
//Bei std::vector in C++ musst du die Größe nicht zur Compile-Zeit angeben — er wächst vollautomatisch zur Laufzeit.

#include <vector>

std::vector<int> v; // leer, keine Größenangabe nötig

int main(){

    v.push_back(10);    // fügt Elemente dynamisch hinzu
    v.push_back(20);
    v.push_back(30);


    return 0;
}
// Größe ist jetzt 3 — alles zur Laufzeit entschieden


/*
v.push_back(42);        // Element am Ende hinzufügen
v.emplace_back(42);     // effizienter, direkt im Vektor konstruieren
v.pop_back();           // letztes Element entfernen
v.insert(v.begin(), 5); // an beliebiger Position einfügen
v.size();               // aktuelle Anzahl der Elemente
v.capacity();           // aktuell reservierter Speicher
v.reserve(100);         // Speicher vorab reservieren (optional, für Performance)
*/
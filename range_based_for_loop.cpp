#include <iostream>
#include <vector>

int main() {

    // Eine Range kann sein:
    // - std::vector, std::array, std::list ...
    // - C-Array
    // - std::initializer_list  {1, 2, 3}
    // - jeder Typ der begin() und end() hat

    std::vector<int> zahlen = {10, 20, 30, 40, 50};

    // ┌─────────────────────────────────────────────────────┐
    // │  for ( Deklaration : Range )                        │
    // │        ↑                ↑                           │
    // │    Variable die     was durchlaufen                 │
    // │    jedes Element    werden soll                     │
    // │    empfängt                                         │
    // └─────────────────────────────────────────────────────┘

    std::cout << "=== Kopie (auto) ===" << '\n';
    // auto z  →  z ist eine KOPIE des Elements
    // Änderungen an z haben KEINEN Einfluss auf den Vektor
    for (auto z : zahlen) {
        z *= 2;                          // ändert nur die Kopie
        std::cout << z << ' ';          // 20 40 60 80 100
    }
    std::cout << '\n';
    std::cout << "Vektor unverändert: " << zahlen[0] << '\n'; // noch 10


    std::cout << "\n=== Referenz (auto&) ===" << '\n';
    // auto& z  →  z ist eine REFERENZ auf das echte Element
    // Änderungen wirken sich direkt auf den Vektor aus
    for (auto& z : zahlen) {
        z *= 2;                          // ändert das echte Element
        std::cout << z << ' ';          // 20 40 60 80 100
    }
    std::cout << '\n';
    std::cout << "Vektor geändert: " << zahlen[0] << '\n';    // jetzt 20


    std::cout << "\n=== Const-Referenz (const auto&) ===" << '\n';
    // const auto& z  →  Referenz, aber nur lesbar
    // kein Kopieren, kein versehentliches Ändern
    // empfohlen wenn man nur lesen will
    for (const auto& z : zahlen) {
        // z *= 2;  // Fehler! z ist const
        std::cout << z << ' ';
    }
    std::cout << '\n';


    std::cout << "\n=== Mit Init-Statement (C++20) ===" << '\n';
    // int i = 1  →  Zähler der nur in der Schleife lebt
    // nach der Schleife ist i nicht mehr sichtbar
    for (int i = 1; const auto& z : zahlen) {
        std::cout << i++ << ": " << z << '\n';
    }


    std::cout << "\n=== Was der Compiler daraus macht ===" << '\n';
    // Die range-based for wird intern so expandiert:
    //
    //  auto&& __range = zahlen;
    //  auto __begin   = __range.begin();   // Zeiger auf erstes Element
    //  auto __end     = __range.end();     // Zeiger hinter letztes Element
    //
    //  for (; __begin != __end; ++__begin) {
    //      auto z = *__begin;              // Element holen
    //      // ... Schleifenkörper
    //  }
    //
    // ++__begin springt um sizeof(int) Bytes weiter
    // das ist das "Springen" zwischen den Elementen

    // Zum Vergleich: klassische for die dasselbe tut
    for (int i = 0; i < static_cast<int>(zahlen.size()); i++) {
        std::cout << zahlen[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}
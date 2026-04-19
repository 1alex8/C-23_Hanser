//Datentyp mit auto vom Compiler ermitteln lassen:
/*
Bei constexpr- und anderen inline-Funktionen liest der Compiler den gesamten Funk￾tionskörper vor der ersten Verwendung, 
einschließlich der return-Anweisung. Das ermöglicht dem Compiler, den Rückgabetyp zu ermitteln, 
sowohl in der Funktionsdefiniti￾on, als auch beim Aufruf der Funktion. 

In solchen Fällen muss man nicht den Datentyp
erst nachsehen, sondern kann das bekannte Schlüsselwort auto verwenden. 

Im Listing 2.44 auf Seite 157 kann auto den Datentyp an vielen Stellen ersetzen. 
Das Ergebnis sehen Sie im Listing 2.47.
*/
// Wann es nicht möglich ist:
/*
Es ist nicht immer möglich, den Rückgabetyp durch auto zu ersetzen. Wenn Sie sich
fragen, warum der Datentyp long long der rekursiven Funktion fakultaet1() nicht durch
auto ersetzt werden kann:

Um den Typ des Funktionsergebnisses zu bestimmen, muss der Typ des Funktionsaufrufs
fakultaet1(zahl - 1) in der return-Anweisung bekannt sein – aber der soll ja gerade
erst bestimmt werden! Hier beißt sich die Katze in den Schwanz.
*/

#include <iostream>

[[nodiscard]] auto fakultaet0(int zahl){                // !constexpr
    long long fak{1uL};
    while(zahl > 1){
        fak *= zahl--;
    }
    return fak;
}

[[nodiscard]] constexpr long long fakultaet1(int zahl){ // constexpr
    return zahl < 1 ? 1 : zahl * fakultaet1(zahl - 1);
}

[[nodiscard]] auto getwert(){                           // !constexpr
    return 3;
}

int main(){
    const auto erg0{fakultaet0(3)};
    std::cout << "Ergebnis = " << erg0 << '\n';

    // constexpr function liefert nicht constexpr wert
    int zahl{4u};
    auto erg1{fakultaet1(zahl)};                        //kein const
    std::cout << "Ergebnis = " << erg1 << '\n';

    // constexpr function liefert nicht constexpr wert 
    const auto czahl1 {getwert()};                      //nicht mit constexpr initialisert
    auto erg2 {fakultaet1(czahl1)};
    std::cout << "Ergebnis = " << erg2 << '\n';

    //constexpr-function liefert constexpr wert
    const int czahl2{3};                                // 3 ist literal
    constexpr auto erg3{fakultaet1(czahl2)};
    std::cout << "Ergebnis = " << erg3 << '\n';


    //constexpr func liefert constexpr wert
    constexpr auto erg4{fakultaet1(6)};                 // 6 ist literal
    std::cout << "Ergebnis = " << erg4 << '\n';
}
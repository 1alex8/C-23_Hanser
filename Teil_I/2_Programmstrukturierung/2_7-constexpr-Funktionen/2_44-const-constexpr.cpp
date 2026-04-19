// Hier werden const und constexpr gegenüber gestellt.
// Auserdem wird die Anwendung einer constexpr funktion gezeigt.

//Hinweis:
/*
constexpr-Funktionen sind gleichzeitig inline. Das bedeutet, 
dass Deklaration und De￾finition in derselben Übersetzungeinheit sein müssen. 
Damit der Compiler die Funktion nutzen kann, 
muss die Definition vor dem Aufruf von ihm gelesen worden sein. Die
Definition einer constexpr-Funktion, die von mehreren Übersetzungseinheiten genutzt
werden soll, gehört daher in eine Header-Datei. Das Schlüsselwort inline entfällt
*/

/*
Die Fälle des folgenden Beispiels zeigen die verschiedenen Möglichkeiten. Entscheidend
ist, ob das übergebene Argument ein konstanter Ausdruck ist und ob constexpr auf der
linken Seite vor long long verwendet werden kann.
*/

#include<iostream>

[[nodiscard]] long long fakultaet0(int zahl){               // !constexpr
    long long fak{1uL};

    while(zahl > 1){
        fak *= zahl--;
    }
    return fak;
}

[[nodiscard]] constexpr long long fakultaet1(int zahl){      // !constexpr
    long long fak{1uL};
    while(zahl > 1){
        fak *= zahl--;
    }
    return fak;    //rekursiv: return zahl < 2 ? 1 : fakultaet1(zahl - 1);
}

[[nodiscard]] int getwert(){                                // !constexpr
    return 3;
}

int main(){
    const long long erg0{fakultaet0(3)};                    // const, aber nicht constexpr
    std::cout << "Ergebnis = " << erg0 <<'\n';


    // 1) constexpr function liefert !constexpr Wert
    int zahl{4u};                                           // kein const
    long long erg1{fakultaet1(zahl)};
    std::cout << "Ergebnis = " << erg1 <<'\n';

    // 2) constexpr function liefert !constexpr Wert
    const int czahl1{getwert()};                            // nicht mit constexpr initialisiert
    long long erg2{fakultaet1(czahl1)};
    std::cout << "Ergebnis = " << erg2 << '\n';

    // 3) constexpr-Function liefert constexpr Wert
    const int czahl2{3};                                    // 3 ist literal, also constexpr
    constexpr long long erg3{fakultaet1(czahl2)};
    std::cout << "Ergebnis ist = " << erg3 << '\n';

    // 4) constexpr-function liefert constexpr wert
    constexpr long long erg4{fakultaet1(3)};                // 3 ist literal, also constexpr
    std::cout << "Ergebnis = " << erg4 << '\n';

    return 0;
}

/*
Wenn das Argument auf ein Literal zurückgeführt werden kann, kann der Compiler den
Wert für den Aufruf einsetzen und berechnen. Eine Ausführung zur Laufzeit unterbleibt,
was der Geschwindigkeit des Programms zugute kommt.
*/

//Ausgabe:
/*
Ergebnis = 6
Ergebnis = 24
Ergebnis = 6
Ergebnis ist = 6
Ergebnis = 6
*/
#include<iostream>

/*
noexcept ist eine Spezifikation, die dem Compiler mitteilt: „Diese Funktion wirft keine Exceptions."


In deinem Fall macht noexcept in Kombination mit constexpr Sinn: Eine constexpr-Funktion soll zur Compile-Zeit auswertbar sein — Exceptions passen da konzeptionell ohnehin nicht rein.
*/

/*
möchte man wissen, ob eine constexpr-Funktion schon zur Compilationszeit
ausgewertet wird. Ein Grund dafür kann sein, dass bei der Auswertung zur Laufzeit ein
anderer Algorithmus gewählt werden soll. Mit if consteval kann die Prüfung vorge￾nommen werden, wie Listing 2.45 zeigt.
*/

/*

*/

constexpr int f(int x) noexcept{
    if consteval{return x + 42 ;}
    return x;
}

int main(){
    const auto wert1{f(10)};                //Auswertung: Compiletime
    int w{10};
    const auto wert2{f(w)};                 //Auswertung: Runtime
    std::cout << wert1 << "    " << wert2 <<'\n';
}


/*
Die geschweiften Klammern nach if consteval sind zwingend. Das gilt auch für einen
möglichen else-Zweig. Das negierende Gegenstück ist if not consteval.
*/
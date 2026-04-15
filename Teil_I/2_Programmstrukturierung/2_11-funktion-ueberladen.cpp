/*
Funktionen können überladen werden. Bedeutet, dass man denselben Funktionsnamen verschiedenen Funktionen zuordnen kann.
Die Entscheidung welche genutzt wird, kann der Compiler anhand der Signatur der Funktion Entscheiden.

Signatur: Kombination aus Func-name mit der Reihenfolge und Typen der Parameter.

Beispiel
*/

#include <iostream>
using namespace std;

[[nodiscard]] double maximum(double x, double y){
    return x > y ? x : y;
}

[[nodiscard]] double maximum(int x, int y){
    return x > y ? x : y;
}

int main(){

    double a{100.2};
    double b{333.444};
    int c{17000};
    int d{1000};

    cout << maximum(a, b) << '\n';//Aufruf von maximum(double, double);
    cout << maximum(c, d) << '\n';//Aufruf von maximum(int, int)

    return 0;
}

//Ausgabe: 
/*
333.444
17000
*/
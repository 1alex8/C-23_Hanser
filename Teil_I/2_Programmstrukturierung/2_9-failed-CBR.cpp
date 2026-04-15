/*
Hier wird eine fehlerhafte nutzung von Referenzen gezeigt.
Hier ist der ReturnType der Function eine Ref auf int (int&).

Problem:

Nach Beendigung der Funktion wird die Var die zurückgegeben wird verworfen (,weil nicht static)
Also haben wir einen Rückgabetyp auf einen Undefinierten Speicher.
*/

#include<iostream>

int& maxwert(int a, int b){ //Rückgabetyp ist referenz
    return (a > b) ? a : b; //Fehler, weil a und b cbv's sind und deshalb bei Ende der Funk verworfen werden.
}

int main(){

    int x = 17;
    int y = 4;
    int& z = maxwert(x, y);
    std::cout << z << '\n';
    int& x1 = maxwert (y , x);
    std::cout << z << '\n'; //Vermutlich anderer Wert.

    return 0;
}
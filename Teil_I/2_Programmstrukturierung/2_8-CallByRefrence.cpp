/*
Bei Schnittstellen unterscheiden wir in den Basics zwischen 2 Arten,
- Call by Value
- Call by Refrence


Call by reference ist ein zugriff auf die Original Variable unter einem Alias:

int& ist ein Datentyp : Referenz auf int 

Eine Referenz ist also nur ein Alias für die selbe Var
int i{5};
int& x{i};

x ist jetzt ein weiterer Name für i

Mann kann sich vorstellen das der Compiler überall wo x steht x durch i ersetzt.
*/

#include <iostream>
#include <print>

void add7(int& zahl);//Parameter ist eine Referenz auf eine Variable vom typ int

int main(){
    int i{0};

    std::print("{} = alter Wert von i\n", i);
    add7(i);//Hier wird i an eine Funktion übergeben.

    std::print("{} = neuer Wert von i nach add7\n", i);

    return 0;
}

void add7(int& x){// int& Referenz auf int
    x+=7; // Original des Aufrufers wird verändert.
}

/*
Ausgabe:
0 = alter Wert von i
7 = neuer Wert von i nach add7
*/
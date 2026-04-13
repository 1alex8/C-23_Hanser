/*
Bei Schnittstellen unterscheiden wir in den Basics zwischen 2 Arten,
- Call by Value
- Call by Refrence

hier wird CBV gezeigt:
CBV:
Der Wert wird kopiert und der Funktion übergeben.
Innerhalb der Funktion wird mit einer Kopie gearbeitet.
Das Original beim Aufrufer bleibt unverändert.
Ergebnis der Funktion wird, dann meist einer anderen Variable zurückgegeben.
*/

#include <iostream>
[[nodiscard]] int add5(int);//Funktionsprototyp/Deklaration + no discard für Comilerwarnung bei nicht verwendetem Rückgabewert

int main(){
    int i {0};
    std::cout << i << " = Wert von i vor add5\n";
    auto erg  {add5(i)};
    std::cout << erg << " = Ergebnis von add5\n";
    std::cout << i << " = Wert von i nach add5 (unverändert)\n";

    return 0;
}

int add5(int x ){ //Definition
    x += 5;
    return x;
}

/*
Ausgabe: 
0 = Wert von i vor add5
5 = Ergebnis von add5
0 = Wert von i nach add5 (unverändert)
*/
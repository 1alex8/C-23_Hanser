/*
Diese Art der Makro nutzung der Makronutzun gist weit verbreitet und hat ihre Vorteile.:
- Nahc Testabschluss wird das Prog schneller und benötigt weniger Speicher
- Die Testanweisung können im Programm zum späteren gebrauch stehen bleiben Sie müssen nicht einzeln auskommentiert werden.
Es gibt jedoch eine Lösung die nur mit Sprachelementen von c++ auskommt(also ohne Makros, die vom Präprozessor verarbeitet werden).


*/


#include <iostream>
#include <cmath>

#define TEST_EIN
#ifdef TEST_EIN
    #define TESTANWEISUNG(irgendwas) irgendwas
#else
    #define TESTANWEISUNG(irgendwas) /*nichts*/
#endif

int main() {
    double x = -4.0;
    double y;

    TESTANWEISUNG(if (x < 0) std::cout << "Warnung: sqrt von negativer Zahl (" << x << ")!\n";)
    y = sqrt(x);

    std::cout << "y = " << y << std::endl;

    x = 9.0;
    TESTANWEISUNG(if (x < 0) std::cout << "Warnung: sqrt von negativer Zahl (" << x << ")!\n";)
    y = sqrt(x);

    std::cout << "y = " << y << std::endl;

    return 0;
}


//Ausgabe:
/*
Warnung: sqrt von negativer Zahl (-4)!
y = nan
y = 3
*/
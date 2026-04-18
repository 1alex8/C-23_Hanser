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
/*
strucured binding 

ist die abblildung einer struktur auf einzelene Variablen.

auto[] sogt dabei für die automatische deklaration der variablen, die den Einzelteilen des größeren Ganzen entsprechen.

Es sei die Struktur Punkt, wie in 1_25, mit den Attributen x und y gegeben. Dann bewirken die Anweisungen:

//Code:
point p1;
auto[a, b] = p1;

dasselbe wie:

//Code:
point p1;
int a = p1.x;
int b = p1.y;

So können mehrere Deklarationen erzeugt werden. Versehen mit einem "&" (Referenz), werden Referenzen statt Kopien angelegt,
also int& a = p1.x; usw.


Hier wird beides gezeigt:
*/

#include <iostream>

struct point{
    int x;
    int y;
};

int main(){
    point p1{100, 200};

    auto [a, b] = p1;//Kopie

    std::cout << "a = " << a << "    b = " << b << '\n';

    auto &[c, d] = p1; //Referenz

    c += 50;
    d += 50;

    std::cout << "p1.x = " << p1.x << "    p1.y = " << p1.y << '\n';

    return 0;
}

//Ausgabe:
/*
a = 100    b = 200
p1.x = 150    p1.y = 250
*/
//nodiscard tells the compiler to warn about unused return types of functions
// vergessene Rückgabe werte aufspüren

#include<iostream>

//func:
[[nodiscard]] int summe(int a , int b){return a + b;}

//Alternativ mit erklärung
[[nodiscard ("Product ignoriert!")]] int produkt(int x, int y){return x * y;}

struct [[nodiscard]] S{
    int wert = 42;
};

S getstruct(){S s; return s;}

enum class [[nodiscard]] Farbe{
    rot,
    gelb,
    gruen
};
Farbe getRot(){return Farbe::rot;}

int main(){
    //Kein Problem: hier werden alle Rückgaben verwendet.
    std::cout << summe(3, 4) << ' ' << produkt(5, 10) << '\n';
    std::cout << getstruct().wert << '\n';
    if(getRot() == Farbe::rot) std::cout << "Die Farbe ist rot\n";

    //Ohne verwendung des return wertes, sind folgende sinnlos.
    //führt zu warnungen:
    /*
    summe(3,4);
    produkt(3,8);
    getRot();
    getstruct();
    */

    return 0;
}
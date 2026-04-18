//Zusicherung zur Laufzeit:


// LAUFZEIT: assert() //Makro
//compiletime : static_assert(); //c++ keyword

/*
assert() nutzt man zur überprüfung logischer Annahmen, die anstelle des Makros gültig sein sollen
assertion == Zusicherung
*/

#include <cassert>

#include <iostream>

constexpr int grenze {100};

int main(){

    static_assert(sizeof(long long) > sizeof(int), "long long hat nicht mehr bits als int!");
    //wenn behauptung falsch wird string ausgegeben.

    int index = -1;
    //berechnung von index

    //Test auf einhaltung
    assert(index >= 0 && index < grenze);
}

// Wenn annahme falsch wird Prog abgebrochen.
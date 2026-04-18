// Implementationsdatei:

/*
Endungen: .cpp, .cxx, .cc

Enhält: Implementationen der Klassen
        Programmcode der Funktionen
*/

//Wichtig:
#include "mittelwert.hpp"
#include <iostream>

double mittelwert(std::vector<double>& vec){
    if (vec.size() < 1 ){
        std::cerr << "Der Vector ist leer! Abbruch! \n";
        std::exit(1);
    }
    double ergebnis{0};
    for(auto summand : vec){
        ergebnis +=summand;
    }
    ergebnis /= static_cast<double>(vec.size());

    return ergebnis;
}
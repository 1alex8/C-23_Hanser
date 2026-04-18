// Main datei

/*
Endungen: .cpp

Enthält das Hauptprogramm
*/

#include<iostream>
#include"mittelwert.hpp"

int main(){
    std::vector<double> daten {1.0, 1.2, 99.001, -23.5, 10.07};
    std::cout << "Der Mittelwert von daten ist: " << mittelwert(daten) << '\n';
}


//Befehl + Ausgabe:
/*
\2_4_1-multiple-cpp-files> g++ --std=c++23 main.cpp mittelwert.cpp -o middle
\2_4_Modulare-Programmgestaltung\2_4_1-multiple-cpp-files> ./middle          
Der Mittelwert von daten ist: 17.5542
*/
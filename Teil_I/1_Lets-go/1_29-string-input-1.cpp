#include<iostream>
#include<string>

int main(){

    std::cout << "Geben Sie Vor und Nachname ein: ";

    std::string vorname;
    std::string nachname;

    std::cin >> vorname;
    std::cin  >> nachname;

    std::cout << vorname << nachname << '\n';

    return 0;
}

/*
Ausgabe:

Geben Sie Vor und Nachname ein: Alexander Gottfried Mack
AlexanderGottfried
*/
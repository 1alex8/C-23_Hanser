/*
getline ließt alles auch whitespaces bis zum enter ein.
*/


#include<iostream>
#include<string>

int main(){

    std::cout << "Geben Sie Vor und Nachname ein: ";

    std::string name;

    getline(std::cin, name);

    std::cout << name << '\n';

    return 0;
}

/*
Ausgabe: 

Geben Sie Vor und Nachname ein: Max Moritz Mustermann
Max Moritz Mustermann
*/
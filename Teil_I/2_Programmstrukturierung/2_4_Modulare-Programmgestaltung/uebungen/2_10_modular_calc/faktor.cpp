#include<iostream>
#include"parser.hpp"

long faktor(char& c){
    long f{0l};

    if(c == '('){
        std::cin.get(c);
        f = ausdruck(c);

        if(c != ')'){
            std::cerr << "Rechte Klammer fehlt!\n";
        }else{
            std::cin.get(c);
        }
    }else{
        f = zahl(c);
    }
    return f;
}
#include<iostream>
#include"parser.hpp"


long ausdruck(char& c){                     // Übergabe per Referenz
    long a{0l};                             //Hilfsvariable für Ausdruck

    if(c == '-'){
        std::cin.get(c);                    // - im Eingabestrom überspringen
        a = -summand(c);
    }
    else{
        if(c == '+'){
            std::cin.get(c);                // + im Eingabestrom überspringen
        }
        a = summand(c);
    }
    while(c == '+' || c == '-'){
        if(c == '+'){
            std::cin.get(c);
            a += summand(c);
        }else{
            std::cin.get(c);
            a -= summand(c);
        }
    }

    return a;
}
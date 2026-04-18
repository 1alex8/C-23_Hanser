#include<iostream>
#include"parser.hpp"

long summand(char& c){
    long s{faktor(c)};
    while(c == '*' || c == '/'){
        if(c == '*'){
            std::cin.get(c);
            s *= faktor(c);
        }else{
            std::cin.get(c);
            s /= faktor(c);
        }
    }
    return s;
}
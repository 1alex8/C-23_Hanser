#include<iostream>
#include"parser.hpp"

long zahl(char& c){
    long z{0l};

    while(isdigit(c)){
        z = 10l * z + static_cast<long>(c - '0');
        std::cin.get(c);
    }
    return z;
}
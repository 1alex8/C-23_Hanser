//Hier wird die Übung 2.12 Modular von mir aufgebaut


#include<iostream>
#include<cctype>
#include"parser.hpp"


int main(){

    char ch{'e'};

    do{
        std::cout<<"\n>>";
        std::cin.get(ch);
        if(ch != 'e'){
            std::cout << ausdruck(ch);
        }
    }while(ch != 'e');

    return 0;
}

//Befehl + eingabe + ausgabe:
/*
PS D:\Coding\Tutorial\CPP23_7_Hanser\Teil_I\2_Programmstrukturierung\2_4_Modulare-Programmgestaltung\uebungen\2_10_modular_calc> g++ --std=c++23 main.cpp ausdruck.cpp faktor.cpp summand.cpp zahl.cpp -o moduleCalculator
PS D:\Coding\Tutorial\CPP23_7_Hanser\Teil_I\2_Programmstrukturierung\2_4_Modulare-Programmgestaltung\uebungen\2_10_modular_calc> ./moduleCalculator

>>3+3
6
>>(3+6/2)*2
12
>>66*33/12
181
>>e
*/
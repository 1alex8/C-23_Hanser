/*
Attribute werden in c++ mit 2 eckigen Klammern signalisiert: [[Attribut]];
Attribute sind meist Mitteilungen an den Compiler um Warnungen abzuschalten, wie z.B. dass hier die break anweisungen absichtlich weggelassen werden.

fallthrough: [[fallthrough]] signalisiert in einer switch anweisung das das break absichtlich weggelassen wird.
*/

#include<iostream>
#include<print>

int main(){

    int zahl{-1};

    char zeichen{'*'};

    std::cout<<"Zeichen : ";
    std::cin >> zeichen;

    switch(zeichen){
        case 'I':
            [[fallthrough]];
        case 'i':
            zahl = 1;
            break;
        case 'v':
            [[fallthrough]];
        case 'V':
            zahl = 5;
            break;
        case 'x':
            [[fallthrough]];
        case 'X':
            zahl = 10;
            break;
        case 'l':
            [[fallthrough]];
        case 'L':
            zahl = 50;
            break;
        case 'c':
            [[fallthrough]];
        case 'C':
            zahl = 100;
            break;
        case 'd':
            [[fallthrough]];
        case 'D':
            zahl = 500;
            break;
        case 'm':
            [[fallthrough]];
        case 'M':
            zahl = 1000;
            break;
        default:
            zahl = 0;
    }

    if(zahl > 0) std::cout << "Zahl = " << zahl << '\n';
    else std::cout << "Keine römische Ziffer \n";

    return 0;
}
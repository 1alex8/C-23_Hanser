#include<iostream>
#include<print>

int main(){

    int zahl{-1};

    char zeichen{'*'};

    std::cout<<"Zeichen : ";
    std::cin >> zeichen;

    switch(zeichen){
        case 'I':
            zahl = 1;
            break;
        case 'V':
            zahl = 5;
            break;
        case 'X':
            zahl = 10;
            break;
        case 'L':
            zahl = 50;
            break;
        case 'C':
            zahl = 100;
            break;
        case 'D':
            zahl = 500;
            break;
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
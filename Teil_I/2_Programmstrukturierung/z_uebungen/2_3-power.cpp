// hier wird manuell ein pow befehl geschrieben oder in anderen Worten x hoch y

#include <iostream>
#include<cmath>

double powerof(double base, int exp);

int main(){
    double x, z, z2;
    int y;
    std::cout<< "Geben Sie base und exp ein : ";
    std::cin>> x >> y;

    //eine Methode aus cmath:
    z = std::pow(x, y);
    std::cout <<"\n\n Ergebnis von cmath pow = " << z <<'\n';

    //meine eigene Funktion powerof

    z2 = powerof(x, y); 
    std::cout << "Ergebnis von meiner Eigenen Funktion powerof = " << z2 << std::endl;

    return 0;
}

double powerof(double base, int exp){

    double value {0};
    double temp {1};

    if(exp == 0) return 1;
    else if(exp < 0 ){
        for(int i = 0; i < (std::abs(exp)) ; i++){
            temp *= base;
        }
        value = 1 / temp;
    }else{
        for (int i = 0; i < exp; i++){
            temp *= base;
        }
        value = temp;
    }


    return value;
}
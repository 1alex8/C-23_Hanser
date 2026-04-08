/*
Beispiele für verschiedene Math. funcs aus dem cmath header
die funktionen gehen std. mäßig von einem double dt aus.
*/

#include<iostream>
#include<cmath> //math. funcs

int main(){

    double x{0.0};

    std::cout<<"Geben Sie einen Wert für x ein: ";
    std::cin >> x;
    std::cout << "x\t=" << x <<'\n';
    std::cout << "fabs(x)\t=" << fabs(x) << '\n';
    std::cout << "sqrt(x)\t=" << sqrt(x) << '\n';
    std::cout << "sin(x)\t="<< sin(x) << '\n'; // arg von sinus im Bogenmaß
    std::cout << "exp(x)\t=" << exp(x) << '\n';
    std::cout << "log(x)\t=" << log(x) << '\n';//log() ist der natürliche Algorithmus

    return 0;
}

/*
Ausgabe:
Geben Sie einen Wert für x ein: 2
x       =2
fabs(x) =2
sqrt(x) =1.41421
sin(x)  =0.909297
exp(x)  =7.38906
log(x)  =0.693147
*/
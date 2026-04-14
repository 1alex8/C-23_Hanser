#include <iostream>
#include <cmath>
#include <cstddef>

long long fak(long long z);

int main(){

    long long x {0ll};
    long long erg{0ll};

    std::cout << "Geben Sie eine Zahl ein: ";
    std::cin >> x;

    erg = fak(x);

    std::cout << x <<"! = " << erg << '\n';

    return 0;
}

long long fak(long long z){
    long long erg{0ll};
    if(z == 0) return 1;
    else if (z == 1) return 1;
    else if (z < 0) exit(3);
    else{
        erg = z * fak(z - 1);//Rekursion
    }
    return erg;
}

/*
Ausgabe
*/
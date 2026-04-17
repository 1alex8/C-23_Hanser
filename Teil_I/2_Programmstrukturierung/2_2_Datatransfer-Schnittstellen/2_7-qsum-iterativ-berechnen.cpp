/*
Der Aufruf einer funktion durch sich selbst wird REKURSION genannt.
Hier wird an Hand einer quersumme die rekursion gezeigt.
qsum:  234 = 2+3+4 = 9 [quersumme]
*/

#include <iostream>

[[nodiscard]]int qsum(long z);

int main(){

    std::cout << "Int: ";
    long x{0};
    std::cin >> x;

    std::cout << "Quersumme = " << qsum(x) << '\n';

    return 0;
}

int qsum(long z){
    int sum{0};
    while(z > 0){
        sum += z % 10;
        z = z /10;
    }
    return sum;
}
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
    if(z != 0){
        int letzteZiffer = z % 10;
        return letzteZiffer + qsum(z / 10);//Rekursion
    }else return 0;
}
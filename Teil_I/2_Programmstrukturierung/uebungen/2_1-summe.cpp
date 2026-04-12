#include<iostream>
#include<cmath>

long long sum(int von, int bis);

int main(){
    std::cout << "Geben Sie den Zahlenbereich ein der aufsummiert werden soll";
    int a, b;
    std::cin>> a >> b;

    long long ergebnis{sum(a, b)};

    std::cout<<"\n\nErgebnis: " << ergebnis << std::endl;

    return 0;
}

long long sum(int x, int y){
    long long z {0ll};

    for (long long i = static_cast<long long>(x); i <= static_cast<long long>(y); i++){
        z += i;
    }
    return z;
}
/*
Hinweis:
Operator: ~ invertiert alle Bits, bedeutet bei unsigned int a = 0;
unsigned b = ~a; b größmogliche int Zahl
*/

#include <iostream>
#include <limits>
#include <print>

int main(){

    unsigned int au {0};
    unsigned int bu {~au};// hier : ~

    unsigned long cul {0};

    unsigned long long dull {0ull};

    std::cout << "Größmögliche unsigned int = " << bu << '\n';
    std::print("Größtmögliche unsigned long = {}\n", std::numeric_limits<unsigned long>::max());
    std::print("unsigned long long Minimum = {} Maximum = {}\n",dull, std::numeric_limits<unsigned long long>::max());


    return 0;
}

/*
Ausgabe:
Größmögliche unsigned int = 4294967295
Größtmögliche unsigned long = 4294967295
unsigned long long Minimum = 0 Maximum = 18446744073709551615
*/
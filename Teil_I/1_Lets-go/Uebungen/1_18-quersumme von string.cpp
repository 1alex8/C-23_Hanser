#include <string>
#include <iostream>
#include <numeric>
#include <print>


int main(){

    std::string sZahl;
    std::cin >> sZahl;

    long long x {std::stoll(sZahl)};

    long long quersumme{0};

    quersumme = std::accumulate(sZahl.begin(), sZahl.end(), 0ll, [](int sum, char c){return sum + (c - '0');});

    std::print("Zahl {},  Quersumme {}", x, quersumme);

    return 0;
}

//Ausgabe: 
/*
234
Zahl 234,  Quersumme 9
*/
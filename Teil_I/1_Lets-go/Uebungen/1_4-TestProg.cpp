#include<iostream>
#include<print>

int main(){

    int a1{0}, a2{0}, a3{0};
    int c {0};

    std::cout << "Geben Sie Var 1 ein: ";
    std::cin >> a1;
    std::cout << "Geben Sie Var 2 ein: ";
    std::cin >> a2;
    std::cout << "Geben sie Var 3 ein: ";
    std:: cin >> a3;

    c = (a1 + a2) * a3;

    std::print("Das Ergebnis von ({} * {}) + {} ist : {}", a1 , a2, a3 ,c);

    return 0;
}

/*
Ausgabe: 
Geben Sie Var 1 ein: 1
Geben Sie Var 2 ein: 1
Geben sie Var 3 ein: 2
Das Ergebnis von (1 * 1) + 2 ist : 4
*/
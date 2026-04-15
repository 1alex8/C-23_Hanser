#include <iostream>

void max(int a, int b, int &c){
    c = (a > b)? a : b;
}

int main(){

    int x, y, z;

    std::cout << "Geben Sie 2 int werte ein :";
    std::cin >> x >> y;
    max(x, y, z);

    std::cout << "Der max wert ist: " << z << '\n';


    return 0;
}
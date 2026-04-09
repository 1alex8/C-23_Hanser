#include<iostream>
#include<print>

int main(){

    double max, a, b, c;

    std::printf("Gib 3 Zahlen ein: ");
    std::cin >> a >> b >> c;
    if(a > b && a > c){
        std::print("{}", a);
    }else if(b > a && b > c){
        std::print("{}", b);
    }else if(c > b && c > b){
        std::print("{}", c);
    }else std::print("Alle gleich");

    return 0;
}
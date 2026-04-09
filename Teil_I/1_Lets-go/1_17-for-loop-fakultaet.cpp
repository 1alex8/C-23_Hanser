// hier wird mit einer for schleife die fakulttät einer Zahl berechnet.
// Merke : die Veränderung(i++) wird immer als letztes ausgeführt.

#include<iostream>
#include<print>

int main(){

    int n{0};
    std::cout << "Fakultät berechnen. Zahl >= 0: ";
    std::cin >> n;

    long long fak {1ll};
    for(int i = 2; i <= n ; i++){
        fak *=i;
    }
    std::print("{}! = {}\n", n, fak);

    return 0;
}
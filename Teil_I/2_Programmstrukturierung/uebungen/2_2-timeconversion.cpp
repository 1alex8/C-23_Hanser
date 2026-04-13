//Funktion um eine Zeitangabe in sekunden umzurechnen

#include <iostream>

long long dauerInSekunden(int h, int min, int s);

int main(){
    int h, min ,s;
    std::cout << "Geben Sie eine Zeitangabe im Format : h min s ein : ";
    std::cin >> h >> min >> s;

    auto totalsec = dauerInSekunden(h, min , s);

    std::cout << "Die gesamtdauer in sekunden ist: " << totalsec << '\n';

    return 0;
}

long long dauerInSekunden(int h, int min, int s){
    long long x{0};
    x = static_cast<long long>(h * 3600 + min * 60 + s);

    return x;
}

//Wenn man mit Leerzeichen oder : arbeiten möchte:
/*
std::cin >> h;
if (std::cin.peek() == ':') std::cin.ignore();
std::cin >> min;
if (std::cin.peek() == ':') std::cin.ignore();
std::cin >> s;
*/


//Wenn man mit format mit : als trenner arbeiten möchte:
/*
char sep;
std::cin >> h >> sep >> min >> sep >> s;
*/
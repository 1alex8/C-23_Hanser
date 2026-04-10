#include<iostream>
#include<print>
#include<string>

struct ausweiß{
    std::string vorname;
    std::string nachname;
    int alter;
};

int main(){

    ausweiß a;

    std::cout << "Geben Sie den Vornamen ein: ";
    std::cin >> a.vorname;

    std::cout << "Geben Sie den Nachnamen ein: ";
    std::cin.ignore(); // <-- wichtig! leert buffer
    std::getline(std::cin, a.nachname);//ließt ganzen Satz ein

    std::print("Geben Sie ihr Alter ein: ");
    std::cin >> a.alter;

    std::print("Ihr Name ist : {} {} Alter: {}", a.vorname, a.nachname, a.alter);

    return 0;
}
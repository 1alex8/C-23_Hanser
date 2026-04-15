/*
man kann Parametern Default Values zu weißen, so dass falls nicht jeder Parameter angegeben wird,
die funktion trotzdem funktioniert.
*/

#include<iostream>
#include<string>

//Funktionsprototyp, 2.Parameter mit Vorgabewert
void preisanzeige(double preis, const std::string& waehrung = "Euro");

int main(){

    //2 Aufrufe mit unterschiedlicher Parameteranzahl:
    preisanzeige(12.25);
    preisanzeige(99.99, "US-Dollar");

    return 0;
}

void preisanzeige(double preis, const std::string& currency){
    std::cout << preis << ' ' << currency << '\n';
}

//Ausgabe
/*
12.25 Euro
99.99 US-Dollar
*/
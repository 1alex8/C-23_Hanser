/*
enum class ist ein benutzerdefinierter Datentyp
Beispiel
enum class Name : Typ {Aufzählung} Variablenliste;
enum class Farbtyp{grün, rot, blau, gelb} Wandfarbe, Deckenfarbe;
Farbtyp gewählte_Farbe = Farbtyp::gelb;

gewählte_Farbe ist jetzt gelb;

*/

#include <iostream>

enum class farbtyp {
    rot,
    grün,
    blau,
    gelb
};//Deklaration

int main(){
    farbtyp farbe = farbtyp::blau; // Definition + Initialisierung
    farbtyp wand;
    wand = farbtyp::rot;

    switch(farbe){
        case farbtyp::rot:
            std::cout << "Rot!\n";
            break;
        case farbtyp::grün:
            std::cout << "Grün!\n";
            break;
        case farbtyp::blau:
            std::cout << "Blau!\n";
            break;
        case farbtyp::gelb:
            std::cout << "Gelb!\n";
            break;
    }

    /*
    Auch möglich:
    switch(farbe){
        using enum farbtyp;
        case rot:
            std::cout << "Rot!\n";
            break;
        case grün:
            std::cout << "Grün!\n";
            break;
        case blau:
            std::cout << "Blau!\n";
            break;
        case gelb:
            std::cout << "Gelb!\n";
            break;
    }
    */

    return 0;
}

/*
Ausgabe: 
Blau!
*/
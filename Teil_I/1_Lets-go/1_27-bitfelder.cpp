/*
Ein Bitfeld erlaubt es, Struct-Membern eine genaue Anzahl von Bits zuzuweisen, statt immer ganze Bytes zu verbrauchen.


Wichtige Einschränkungen:

Kein &-Operator auf Bitfelder (keine Adresse ermittelbar)
Nur ganzzahlige Typen (int, unsigned int, bool)
Reihenfolge der Bits im Speicher ist implementierungsabhängig
*/

#include<iostream>

struct bitfeldstruktur{
    // a und b sind bitfelder
    unsigned int a : 4;  // nur 4 bit
    unsigned int b : 3;  // nur 3 bit
};

int main(){

    bitfeldstruktur x; //noch undefiniert

    x.a = 06;// oktal
    x.b = x.a | 3u; // Bitweises oder mit unsigned int 3

    std::cout << x.b << '\n'; // Umwandlung in unsigned int und ausgabe

    return 0;
}

// Ausgabe: 
/*
7
*/
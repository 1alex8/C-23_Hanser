/*
hier werden die anzahl der möglichen Nachkommastellen der verschiedenen Float DT's ausgegeben
*/

/*
wir nutzen:
Header: limits
member: digits10
std::numeric_limits<dt>::digits10
*/

#include<iostream>
#include<limits>
#include<print>

int main(){

    std::cout << "Die Genauigkeit von Float: " << std::numeric_limits<float>::digits10 << " Dezimalstellen\n";
    std::cout << "Die Genauigkeit von double: " << std::numeric_limits<double>::digits10 << " Dezimalstellen\n";
    std::cout << "Die Genauigkeit von long double: " << std::numeric_limits<long double>::digits10 << " Dezimalstellen\n";

    return 0;
}

/*
Ausgabe: 
Die Genauigkeit von Float: 6 Dezimalstellen
Die Genauigkeit von double: 15 Dezimalstellen
Die Genauigkeit von long double: 18 Dezimalstellen
*/
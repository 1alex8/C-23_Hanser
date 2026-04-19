// Berechnung zur Compiletime mit consteval erzwingen
/*
Eine constexpr-Funktion gibt keinen constexpr-Wert zurück, wenn die Auswertung zur
Compilationszeit nicht möglich ist, siehe Fälle 1) und 2) in Listing 2.44. 

Wenn auf jeden Fall das Ergebnis zur Compilationszeit berechnet werden soll, 
muss das Schlüsselwort consteval statt constexpr verwendet werden. 

Eine consteval-Funktion wird »unmittelbare Funktion« (englisch immediate function) genannt. 
Das Ergebnis wird während der Compilation berechnet und sofort eingesetzt. 

Nach der Auswertung wird sie nicht mehr benötigt, muss also im Compilationsergebnis nicht mehr vorliegen. 

Sie können die Wirkung sehen, wenn Sie in Listing 2.46 das Wort const bei der Deklaration von n streichen.
Die Übersetzung würde dann eine Fehlermeldung ergeben.
*/

#include <iostream>

[[nodiscard]] consteval long long fakultaet(int zahl){
    long long fak{1};

    for(int i = 2; i <= zahl; i++){
        fak *= i;
    }
    return fak;
}

int main(){
    const int n {10};
    auto erg = fakultaet(n);
    std::cout << n << "! = " << erg << '\n';
}
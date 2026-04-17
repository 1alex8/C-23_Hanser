#include <iostream>
//Zum Testen eines oder beide der folgenden Makros auskommentieren:

#define zweig
#define konstante 42

int main(){

    #ifdef zwei
        std::cout << "Zeig ist definiert";
    #elifdef kontstante //Prüfung nur wenn zweig undefineirt
        std::cout << "Zweig ist undefiniert, konstante ist definiert\n";
    #if kontstante == 42
        std::cout << "konstante ist 42\n";
    #endif

    #else
        std::cout<< "Zweig undefiniert, konst undefiniert";
    #endif
    return 0;
}
//Erklärung von Makros:
/*
- #define x definiert ein Symbol x
- #if B lösst den Compiler die nächste Zeile verarbeiten, falls der konstante Ausdruck B  wahr ist.
- #ifdef x fragt ob x definiert ist.
- #ifndef x fragt, ob x nicht definiert ist.
- #else gibt eine Alternative an.
- #elif entspricht #else #if
- #endif beschließt jede mit #if beginnende Konstruktion
- #elifdef entspricht #elif defined (seit c++23)
- #elifndef entspricht #elif !defined (seit c++23)
*/



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
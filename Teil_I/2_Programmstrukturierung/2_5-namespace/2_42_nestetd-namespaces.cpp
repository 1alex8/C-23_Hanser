/*
geschachtelte Namespaces:
ist eine Funktion außerhalb eines jeden namespace deklariert, ist sie gleichzeitig global.

Hier wird gezeigt:
- geschachtelte Namespaces
- qualifizierte Ansprache der dort definierten Funktionen und einer globalen Funktion
*/

#include<iostream>
// globale Funktion:
void print(){                                   // freie und globale Funktion
    std::cout << "globales print()\n";
}

namespace A{                                    // Namespace A
    void print(){                               // freie Funktion in Namespace A            
        std::cout << "A::print()\n";
    }

    namespace B{                                // innerhalb von Namespace A -> namespace B 
        void print(){                           // freie Funktion in Namespace B
            std::cout << "A::B::print()\n";
        }
    }                                           // Ende von Namespace B
}                                               // Ende von Namespace A

int main(){


                        // Aufgerufen wird:
    print();            // globale Funktion
    ::print();          // globale Funktion
    A::print();         // A::print
    A::B::print();      // A::B::print

    using namespace A;  // Namespace voreinstellung
    B::print();         // A::B::print()
    ::print();          // globale Funktion
    //print(); //Fehler, weil nicht eindeutig: A::print() oder ::print()?


    return 0;
}
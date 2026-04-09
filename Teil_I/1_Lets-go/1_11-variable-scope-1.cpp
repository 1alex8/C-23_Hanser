#include <iostream>
#include <print>

//Bereichsoperators :: (engl: scope operator) ansprechen. Ausgabe von ::a

/*
a und b werden global deklariert. Sie sind damit innerhalb 
eines jeden anderne Blocks gültig 
*/
int a {1};
int b {2};

int main (){
    //neuer Block beginnt.
    std::cout << "globales a = " << a << '\n'; // Ausgabe glob a

    //Innerhalb des Blocks wird eine Variable a deklariert. 
    //Ab jetzt ist das globale a noch gültig, aber nicht mehr unter dem  Namen a sichtbar
    int a{10};
    //Wert des lokalen a
    std::cout << "lokales a = " << a << '\n';

    //Das globale a lässt sich nach der Deklaration des lokalen a nur noch mithilfe des  
    //Bereichsoperators :: (engl: scope operator) ansprechen. Ausgabe von ::a
    std::cout << "globales ::a = " << ::a << '\n';
    
    {
        //ein neuer Block innerhalb des bestehenden beginnt.
        int b {20};
        //Variable b wird innerhab dieses blocks deklariert.
        //Damit wird das globale a nicht ungültig, aber unsichtbar.
        int c {30};
        //Die Werte b und c werden ausgegeben:
        std::cout << "lokales b = " << b << '\n';
        std::cout << "lokales c = " << c << '\n';

        // Wie oben beschrieben, ist das globale b nur über den 
        // Scope-operator ansprechbar. Ausgabe von ::b 
        std::cout << "gobales ::b = " << ::b << '\n';

    }

    // Der innere Block wurde geschlossen. Damit ist das globale b wieder sichtbar.
    // auch ohne Scope-operator [::] 
    std::cout << "globales b wieder sichtbar = " << b << '\n';

    // std::cout << "c = " << c << '\n'; //Fehler, siehe Text


    return 0;
}

/*
Ausgabe: 
globales a = 1
lokales a = 10
globales ::a = 1
lokales b = 20
lokales c = 30
gobales ::b = 2
globales b wieder sichtbar = 2
*/
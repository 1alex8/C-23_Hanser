#include "xyz.h"
#include "abc.h"

int main(){

    //Als die namespace in den Headern nicht drin waren:
    /*
    print("Hello World");       //Welches print

    func(234.234);              // ok, überladen(zuordnen zu welcher anhand von parametern)
    func();                     // ok, überladen
    */

    abc::print("Hello World abc");      //qualifizierter Name
    xyz::print("Hello world xyz");      //qualifizierter Name

    using abc::print;                   // using deklaration: lokales synonym einführen
    //
    print("Hello abc::print!");          // == abc::print();

    using namespace xyz;

    func(); // wenn ich jetzt print nutzen würde würde immer noch die abc::print genutzt werden weil immer die spezifischere using gewinnt.



    return 0;
}
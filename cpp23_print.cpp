/*
std::print (C++23): Endlich eine moderne Art zu drucken! 
Vergiss das komplizierte printf oder das sperrige std::cout << ... << std::endl;.


Verbesserte Fehlerprüfung: 
Dein Compiler erkennt bei der Initialisierung mit {} (Braced Initialization) jetzt noch präziser, 
wenn du versuchst, einen Wert in einen zu kleinen Datentyp zu "quetschen".
*/


#include <print>
int main() {
    std::print("Hallo, die Summe ist {}\n", 42); // Viel sauberer!
}



//Bereichsoperators :: (engl: scope operator)
/*
assert() makro bricht ein Programm bei Fehler ab,
manchmal möchte man ein Programm weiterlaufen lassen, aber dennoch unerwünschte Zustände dokumentieren.
Dabei ist es hilfreich, wenn die betreffende Datei, die Funktion und die Zeilen nummer bekannt sind.
Dazu muss der Header <source_location> eingebunden werden. 
*/

#include<iostream>
#include<string>
#include<source_location> //für sourcelocation 
#include<fstream>

void log(const std::string& text, const std::source_location& wo = std::source_location::current()){
    std::ofstream logdatei ("logs.txt");
    logdatei << text << " in Datei :" << wo.file_name() << ". in Zeile :" << wo.line() << ". Funktion: " << wo.function_name() << '\n';
}

int main(){
    int a{0};
    //Berechnungen,  bei denen a > 0 werden soll

    if(a <= 0){ //hat nicht geklappt
        log("a <= 0 ! Fehler !");
    }
    return 0;
}
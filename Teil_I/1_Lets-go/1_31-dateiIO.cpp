/*
Beispiel für das Schreiben und Lesen einer txt datei
mit dem header filesystem arbeitet man nur wenn notwendig da er extrem groß ist


*/

#include<iostream>
#include<fstream>
#include<string>

int main(){

    std::string dateiname{""};

    std::cout << "Geben Sie einen Dateinamen ein: ";;
    getline(std::cin, dateiname);

    //Datei schreiben
    std::ofstream datei {dateiname}; //Objekt für Ausgabestrom

    // Alternative:
    //std::ofstream datei;
    //datei.open(dateiname)

    if(!datei.good()){
        std::cerr << dateiname << "kann nicht beschrieben werden! Programmabbruch \n";
        return 1;
    }else{
        datei << "Geschriebender Text.\nZweite Zeile\n";
        datei.close();
    }

    //Lesen derselben Datei und anzeigen der Zeilen:
    std::ifstream quelle{dateiname};

    std::cout << "Der Inhalt von " << dateiname << " ist : \n";

    while(quelle.good()){
        std::string zeile;
        getline(quelle, zeile);
        std::cout << zeile << '\n';
    }

    //Datei wird am Ende automatisch geschlossen trotzdem ist es good practice sie manuell zu schließen
    quelle.close();

    return 0;
}

//Ausgabe: 
/*
Geben Sie einen Dateinamen ein: test.txt
Der Inhalt von test.txt ist : 
Geschriebender Text.
Zweite Zeile
*/
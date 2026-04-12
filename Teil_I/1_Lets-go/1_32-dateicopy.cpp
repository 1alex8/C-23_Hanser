// man könnte auch die lib function von <filesystem> std::filesystem::copy("name 1" , "target_name");

#include <cstdlib> //für exit
#include <fstream>
#include <iostream>
#include <string>

int main(){


    std::string dateiname{""};
    std::cout << "Quelldatei?";
    getline(std::cin, dateiname);

    std::ifstream quelle(dateiname, std::ios::binary); //Objekt für die Eingangsdatei
                                                        //Ohne std::ios::binary
                                                        //wären nur txt dats kopierbar
    if(!quelle.good()){
        std::cerr << dateiname << "kann nicht geöffnet werden!\n";
        exit(1);
    }
    std::cout << "Tagetfile? ";
    std::string targetFile;
    getline(std::cin, targetFile);
    std::ofstream target(targetFile, std::ios::binary);

    if(!target.good()){
        std::cerr << targetFile << " kann nicht geöffnet werden!\n";
        exit(2);
    }
    char ch{'?'};

    while(quelle.get(ch)){//ch ist sehr wichtig sonst wird das dateiende nicht gefunden und alles weitere wird auch kopiert
        target.put(ch);
    }//Zeichenweise kopieren
    quelle.close();
    target.close();

    return 0;
}
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<print>

int main(){

    std::string dateiname;
    std::cout << "Gib Name Brudi: ";
    getline(std::cin, dateiname);

    std::ifstream quelle(dateiname, std::ios::binary);
    
    if(!quelle.good()){
        std::cerr << dateiname << " konnte nicht geöffnet werden. ";
        exit(1);
    }

    int zeichenZahl {0};
    int wortZahl {0};
    int zeilenZahl{0};
    char c;
    char cl;
    bool imWort {false};

    while(quelle.get(c)){
        zeichenZahl++;

        if(c == '\n') zeilenZahl++;
        
        if(isalpha(static_cast<unsigned char>(c))){
            if(!imWort){
                imWort = true;
                wortZahl++;
            }
        }
        else imWort = false;
    }
    if(zeichenZahl > 0 && c !='\n'){
        zeilenZahl++;
    }

    std::print("\nZeilen: {} Worte: {} Zeichen: {}", zeilenZahl, wortZahl, zeichenZahl);


    return 0;
}
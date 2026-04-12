#include<iostream>
#include<fstream>
#include<cstdlib>//für exit()
#include<string>
#include<print>


int main(){

    std::string dateiname{""};

    while(true){
        dateiname = " ";
        std::cout << "\nGeben Sie den Dateinamen ein : ";
        getline(std::cin, dateiname);
        if(dateiname.length() < 2){
            exit(0);
        }

        std::ifstream quelle(dateiname, std::ios::binary);
        if(!quelle.good()){
            std::cout << dateiname << "konnte nicht geöffnet werden.\n";
            exit(1);
        }
        char ch{'?'};
        while(quelle.get(ch)){
            if(ch != '\n'){
                //std::cout << " " << std::showbase << std::hex << static_cast<int>(ch);
                //std::cout << std::dec;
                //ohne hex:
                std::print(" {:#x}", static_cast<int>(ch));

            }else{
                std::cout << " " << ch;
            }
        }

        quelle.close();

    }


    return 0;
}
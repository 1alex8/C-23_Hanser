#include<iostream>
#include<fstream>
#include<cstdlib>//für exit()
#include<string>
#include<print>
#include<vector>


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
        char x;
        std::vector<char> ch(16);
        
        while(quelle.read(ch.data(), 16)|| quelle.gcount() > 0){
            for (auto j: ch){
                std::print("{}", j);
            }
            for (auto j: ch){
                std::print(" {:#x}", j);
            }
        }
       
        quelle.close();

    }


    return 0;
}
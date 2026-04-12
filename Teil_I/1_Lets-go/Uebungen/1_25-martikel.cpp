#include<iostream>
#include<vector>
#include<print>
#include<string>
#include<algorithm>

struct student{
    std::string name;
    int martikel;
};

int main(){

    std::vector<student> studenten;
    student temp;
    char dec {'N'};


    while (true){
        std::print("Geben Sie einen Namen ein oder X zum beenden: ");
        getline(std::cin, temp.name);
        if(temp.name == "x" || temp.name =="X") break;
        std::print("Geben Sie die Martikelnummer ein: ");
        std::cin >> temp.martikel;
        std::cin.ignore();

        studenten.push_back(temp);
    }

    std::print("Nach Martikel suchen? [j/N]");
    std::cin >> dec;

    while(dec == 'j' || dec == 'J'){
        std::print("\nGeben Sie die Martikelnummer ein: 4 Ziffern : ");
        std::cin >>temp.martikel;

        int search = temp.martikel;

        auto it = std::ranges::find_if(studenten, [search](const student& s){
            return s.martikel == search;
        });

        if(it != studenten.end()){
            std::print("Gefunden: {}\n", it->name);
        }else{
            std::print("Nicht gefunden\n");
        }

        std::print("Wollen Sie nochmal? ");
        std::cin>>dec;
    }


    return 0;
}
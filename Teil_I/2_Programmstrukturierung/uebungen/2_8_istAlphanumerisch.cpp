#include<iostream>
#include<string>

bool istAlphanumerisch(std::string& text);

int main(){
    std::string text;


    do{
        std::cout<<"\n>>";
        getline(std::cin, text);
        
        if(text != "exit") std::cout << istAlphanumerisch(text)<<'\n';
    }while(text != "exit");


    return 0;
}

bool istAlphanumerisch(std::string& text){
    if(text.empty()){
        return false;
    }

    for(auto c : text){
        bool istZiffer = (c >='0' && c<='9');
        bool istGross = (c >= 'A' && c <= 'Z');
        bool istKlein = (c >= 'a' && c <= 'z');
        bool istLeer = (c == ' ');

        if(!istZiffer && !istGross && !istKlein && !istLeer) return false;
    }

    return true;
}

// Ausgabe:
/*
>>ahahahah hahah
1

>>4
1

>>ahahai 234 !
0

>>exit
*/
#include <iostream>
#include <string>
#include <print>

/*
Wir könnten uns das alles sparen:
#include <algorithm> // Dafür nötig

void reverse_str(std::string& string){
    std::reverse(string.begin(), string.end());
}

*/

void reverse_str(std::string&);

int main (){

    std::string s1;

    std::print("Geben Sie einen String ein: ");
    getline(std::cin, s1);

    reverse_str(s1);

    std::print("Der umgedrehte alte String ist : {}", s1);
}

void reverse_str(std::string& string){
    std::string temp = string;
    
    for(int i = (temp.length() - 1); auto& x: string){
        x = temp.at(i--);
    }
}
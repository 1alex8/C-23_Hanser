// Zeigt ob auf deinem OS ein char signed oder unsigned ist:

#include <limits>
#include <iostream>

int main(){

    if(std::numeric_limits<char>::is_signed){
        std::cout << "char wird auf diesem System als signed interpretiert.\n";
    }else{
        std::cout << "char wird auf diesem System als unssigned interpretiert.\n";
    }

    std::cout << "Grenzwerte für char in int umgewandelt: \n";
    std::cout << "Minimum = " << static_cast<int>(std::numeric_limits<char>::min()) <<'\n';
    std::cout << "Maximum = " << static_cast<int>(std::numeric_limits<char>::max()) <<'\n';
    std::cout << "Maximum = " << std::numeric_limits<int>::max() <<'\n';

    return 0;
}
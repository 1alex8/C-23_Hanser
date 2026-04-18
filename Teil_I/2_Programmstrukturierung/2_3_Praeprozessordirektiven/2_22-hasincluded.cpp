// __has_include
/*
Es kann den Fall geben, dass eine andere include-datei genommen werden soll,
wenn die eigentlich gewünschte Datei nicht vorhanden ist.

Mit __has_include lässt sich das erreichen.

Ein Beispiel:
*/

#include<iostream>
#include<string>

#if __has_include(<filesystem>)

#include <filesystem>
const std::string meldung {"<filesystem>_inkludiert."};

#elif __has_include(<experimental/filesystem>)
#include<experimental/filesystem>
const std::string meldung{"<experimental/filesystem>_inkludiert"};

#else
const std::string meldung{"filesystem-Header nicht gefunden!"};
#endif

int main(){
    std::cout << meldung << std::endl;
}

//Ausgabe:
/*
<filesystem>_inkludiert.
*/
// Header-datei
/*
Endungen: .h;.hpp;.hxx

Enthält:    Konstanten, 
            Schnittstellen-beschreibungen, wie Klassen-deklarationen, 
            Deklarationen globaler Daten und Funktionsprototypen

*/
//klassisches Header Beispiel:

#ifndef MITTELWERT_HPP
#define MITTELWERT_HPP
#include <vector>

[[nodiscard]] double mittelwert(std::vector<double>& daten);
#endif
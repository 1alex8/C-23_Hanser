// hier werden jetzt die einzelnen Funktionnen eingebunden die über mehrere Implementations dateien verteilt sind

#ifndef PARSER_HPP
#define PARSER_HPP

#include <cctype>

[[nodiscard]]long ausdruck(char& c);

[[nodiscard]]long summand(char& c);

[[nodiscard]]long faktor(char& c);

[[nodiscard]]long zahl(char& c);

#endif
/*
"dateiname" bedeutet meist eine eigene
<dateiname > bedeutet vordefiniertes Verzeichnis
*/

/*

//relativer Pfad:
#include "dateiname.h"
#include "../include/dateiname.h" //  .. kennzeichnet das übergeordnetet Verzeichnis

//absoluter Pfad:
#include "/home/users/IhrName/cppBuch/include/dateiname.h"        //Unix
#include "C:/Users/IhrName/Documents/cppBuch/include/dateiname.h" //windows
*/


// selbst ein directive als Standard include einstellen, damit man mit <header> auf seine eigenene zugreifen kann:
// Befehl: g++ -I IncludeVerzeichnis programm.cpp
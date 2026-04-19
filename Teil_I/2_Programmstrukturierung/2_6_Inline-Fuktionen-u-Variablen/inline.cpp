// inline-Funktionen und -Variablen

/*
Ein Fuktionsaufruf kostet Zeit. Der Zustand des Aufrufers muss gesichert und Parameter
müssen eventl. kopiert werden.
Das Programm springt an eine andere Stelle und nach Ende der Funktion zur Anweisung nach dem Aufruf .
Der relative Aufwand fällt umso stärker ins Gewicht, je weniger Zeit die Abarbeitung des Funktionskörpers selbst braucht.

Der absolute Aufwand macht sich mit steigender Anzahl der Aufrufe bemerkbar, zum Beispiel in Schleifen. 


Inline bewirkt, dass bei der Compilation der Aufruf durch den Funktionskörper ersetzt werden kann
und gar kein Funktionsaufruf erfolgt. Die Parameter werden entsprechend ersetzt, auch die Syntaxprüfung bleibt erhalten
*/

#include<iostream>

inline int quadrat(int x){
    return x * x;
}
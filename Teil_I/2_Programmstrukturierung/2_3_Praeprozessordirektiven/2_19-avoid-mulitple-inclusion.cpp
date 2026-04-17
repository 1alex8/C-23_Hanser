#ifndef C_H
#define C_H
void func_c1();
void func_c2();
enum class Farbtyp{
    rot,
    gruen, 
    blau, 
    gelb
};
#endif//C_H


// Bedeutung
/*
Falls der (beliebige) Name C_H nicht definiert ist.
dann definiere C_H und akzeptiere alles bis #endif

Die Wirkung des ersten Lesens von c.h als indirekte Folge von #include "a.h" ist:
- #ifndef C_H liefert true, weil C_H noch nicht definiert ist
- #define definiert
- Alles bis #endif wird gelesen

Die Wirkung des 2. Durchlaufs von c.h als indirekte Foge con #include "b.h"
- #ifndef C_H liefert false , weil C_h bereits definiert ist.
- Alles bis #endif wird ignoriert.

#if-Blöcke erstecken sich nit über Dateigrenzen. Nach #endif in derselben Zeile stehen der Tect zur doku ist nur erlaubt, wenn er als Kommentar markiert ist
Mit #undef kann eine Definition rückgängig gemacht werden.
*/
#include "particle.h"   // Eigener Header (mit Anführungszeichen, nicht <>)
#include <iostream>     // Standard-Header (mit spitzen Klammern)

// Implementierung der deklarierten Funktionen aus particle.h

void moveParticle(Particle& p) {
    // & bedeutet: wir verändern das Original (Referenz), keine Kopie
    p.x += p.speed;
    p.y += p.speed;
    p.lifetime--;       // Partikel wird älter
}

void printParticle(const Particle& p) {
    // const & = wir lesen nur, verändern nichts
    std::cout << "Position: (" << p.x << ", " << p.y << ")\n";
    std::cout << "Speed:    " << p.speed    << "\n";
    std::cout << "Lifetime: " << p.lifetime << "\n";
}

bool isAlive(const Particle& p) {
    return p.lifetime > 0;  // lebt noch, solange lifetime > 0
}
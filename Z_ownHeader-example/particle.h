#ifndef PARTICLE_H   // Include-Guard: verhindert doppeltes Einbinden
#define PARTICLE_H   // wird definiert, damit der Block nur einmal gilt

// Struct-Deklaration – wie in deinem Go-Beispiel
struct Particle {
    int      lifetime;  // wie lange das Partikel "lebt"
    double   speed;     // Geschwindigkeit
    double   x;         // Position X
    double   y;         // Position Y
};

// Funktions-Deklarationen (nur Prototypen, kein Code!)
// Der Compiler weiß dadurch: "Diese Funktionen existieren irgendwo"
void  moveParticle(Particle& p);
void  printParticle(const Particle& p);
bool  isAlive(const Particle& p);

#endif // PARTICLE_H  // Ende des Include-Guards
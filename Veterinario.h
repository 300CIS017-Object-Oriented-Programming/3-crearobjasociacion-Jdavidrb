#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
using namespace std;
class Veterinario
{
private:
    string nombre;
    int aniosExperiencia;
public:
    Veterinario(string, int);
    string setNombre(string);
    int setAniosExperiencia(int);
    string getNombre();
    int getAniosExperiencia();
    
};


#endif
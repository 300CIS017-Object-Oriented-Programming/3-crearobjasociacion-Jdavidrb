#include "Veterinario.h"

Veterinario::Veterinario(string nom, int aniosExper){
    nombre = nom ;
    aniosExperiencia = aniosExper; 
}
string Veterinario::setNombre(string nom){
    nombre = nom;
}
int Veterinario::setAniosExperiencia(int aniosExp){
    aniosExperiencia = aniosExp;
}
string Veterinario::getNombre(){
    return nombre;
}
int Veterinario::getAniosExperiencia(){
    return aniosExperiencia;
}

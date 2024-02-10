#include "Veterinario.h"

Veterinario::Veterinario(string nom, int aniosExper){
    nombre = nom ;
    aniosExperiencia = aniosExper; 

}
string Veterinario::getNombre(){
    return nombre;
}
int Veterinario::getAniosExperiencia(){
    return aniosExperiencia;
}

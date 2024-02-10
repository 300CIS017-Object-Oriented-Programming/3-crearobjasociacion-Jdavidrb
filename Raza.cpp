#include "Raza.h"
Raza::Raza(){}
Raza::Raza(string nombre,string pOrigen){
    this ->nombre = nombre;
    paisOrigen = pOrigen;
}
void Raza::setNombre(string nombre){
    this -> nombre = nombre;
}

void Raza::setPaisOrigen(string paisOrigen){
    this -> paisOrigen = paisOrigen;
}

string Raza::getNombre(){
    return nombre;
}
string Raza::getPaisOrigen(){
    return paisOrigen;
}


//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros
Propietario::Propietario(){
    edad = 20;
}

Propietario::Propietario(string nombre, string docIdentidad, int edad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
 this ->edad = edad;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}

string Propietario::getNombre()  {
    return nombre;
}
string Propietario::getDocIdentidad(){
    return docIdentidad;
}
int Propietario::getEdad(){
    return edad;
}

string Propietario::mostrarInfo(){
    cout << nombre << " " << docIdentidad << " " << edad << endl; 
}



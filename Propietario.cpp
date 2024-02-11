//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
Propietario::Propietario(){}
//Agrege el constructor por defecto y agrege un constructor con dos parametros
Propietario::Propietario(int ed){
    edad = ed;
}

Propietario::Propietario(string nombre, string docIdentidad, int edad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
 this ->edad = edad;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}
void Propietario::setDocIdentidad(string doc){
    docIdentidad = doc;
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
    cout << "Informacion propietario: " << nombre << " - " << docIdentidad << " - " << edad << endl; 
}



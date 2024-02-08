//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>
using namespace std;
class Propietario {
private:
    string nombre;
    string docIdentidad;
    int edad;
public:
    //Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(); // Contrusctor de un solo parametro incializado en el cuerpo
    Propietario(string nombre, string docIdentidad);
    string mostrarInfo();
    string getNombre();
    void setNombre(string nombre);



};


#endif//PROPIETARIO_H

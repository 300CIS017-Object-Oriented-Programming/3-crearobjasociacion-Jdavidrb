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
    /* Constructores */
    Propietario();//Costructor por defecto
    Propietario(int); // Contrusctor de un solo parametro incializado en el cuerpo Part1 - 2
    Propietario(string nombre, string docIdentidad , int edad); // le agregue edad, Constructor con parametros
    
    /* Set */
    void setNombre(string);
    void setDocIdentidad(string);
    /* Get */
    string getNombre();
    string getDocIdentidad();
    int getEdad();
    /* Print */
    string mostrarInfo();



};


#endif//PROPIETARIO_H

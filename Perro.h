//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"
using namespace std;
class Perro {
private:
    int edad;
    string nombre;
    
    string tamanio;
    string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;
    

public:

    /* Constructores */
    //Perro();
    Perro(); // constructor con lista inicializadora Part1 - 1
    ~Perro(); //Destructor 

    /* Funciones */
    void ladrar();

    /* Set */
    void setEdad(int edad);
    void setRaza(Raza* raza);
    void setNombre(string nombre);
    void setTamanio(string tamanio);
    void setColor(string color);
    /* Sirve para agregar un nuenvo propietario usando memoria dinamica 
    al atributo pPropietario de nuestro objeto perro.  Part1 - 8 */
    void agregarPropietario(string nombre, string docIdentidad , int edad);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);
    void agregarVeterianario(string, int);

    /* Get */
    Propietario * getPropietario();
    int getEdad();
    int getEdadPropietario(); // Consultar edad del propietario del perro
    Raza* getRaza();
    string getNombre();
    string getTamanio();
    string getColor();
    Veterinario* getVeterinario();
};

#endif

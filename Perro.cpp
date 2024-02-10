#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
/* Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}  */
// Lista inicializadora
Perro::Perro() : nombre("fifo"), edad(3), tamanio("Mediano"), color("Naranja"){}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad , int edad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad, edad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}

void Perro::agregarVeterianario(string nombre, int aniosExperiencia){
    this -> pVeterinario = new Veterinario(nombre, aniosExperiencia);
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}
Veterinario* Perro::getVeterinario() {
    return pVeterinario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}


void Perro::setRaza(Raza* raza) {
    this->pRaza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}

// Consultar edad propietario 
int Perro::getEdadPropietario(){
    return this->getPropietario()->getEdad();
}

Raza* Perro::getRaza(){
    return pRaza;
}







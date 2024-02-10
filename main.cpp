#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313" , 24);

    // Consultar el nombre del pPropietario del perro Firulais
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
    /* Desarrollo tarea Part1 */

    Perro* perro1 = new Perro();
    perro1->ladrar(); // Part1 - 3

    Propietario* propietario1 = new Propietario(); // Part1 - 4

    propietario1->mostrarInfo(); // Part1 - 5

    /* Relaciones */
    
    perro1 ->agregarPropietario("Jose David", "1080046638", 17);  // Part1 - 6

    // Consultar docIdentidad del propietario del perro1. Part1 - 7

    cout << "El documento del propietario "  << perro1 ->getPropietario() -> getNombre() 
    << " duenio del perro " << perro1->getNombre() << " es " << perro1->getPropietario()->getDocIdentidad() << endl;
    
    // Consultar edad del propietario del perro1. Part1 - 9

    // se me ocurren 2 maneras; como lo hicimos anteriormete con el documentoIdentidad :
    cout << "La edad del propietario "  << perro1 ->getPropietario() -> getNombre() 
    << " duenio del perro " << perro1->getNombre() << " es " << perro1->getPropietario()->getEdad() << endl;
    //  O tambien hacer un metodo dentro de la clase.
    cout << "la edad del propietario de " << perro1 -> getNombre() << " es " << perro1->getEdadPropietario() << endl;

    /* Parte 2 */
    perro1->agregarVeterianario("Aurerio", 10);
    cout << "El veterinario de " << perro1->getNombre() << " es " << perro1->getVeterinario()->getNombre() << " y tiene " << perro1->getVeterinario()->getAniosExperiencia() << " anios de experiencia" << endl;
    
    /* Parte 3*/
    
    Raza* raza1 = new Raza("Mastin Napolitano","Italia");
    Raza* raza2 = new Raza("Maltes","Italia");
    firulais.setRaza(raza1);
    cout << "La raza de " << firulais.getNombre() << " es " << firulais.getRaza()->getNombre() 
    << " proveniente de " << firulais.getRaza()->getPaisOrigen() << endl;

    return 0;
}

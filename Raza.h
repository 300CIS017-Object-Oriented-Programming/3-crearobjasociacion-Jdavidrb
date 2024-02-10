#ifndef RAZA_H
#define RAZA_H
#include <string>
using namespace std;
class Raza{
    private:
        string nombre;
        string paisOrigen;
    public:
        Raza();
        Raza(string,string);
        void setNombre(string);
        void setPaisOrigen(string);
        string getNombre();
        string getPaisOrigen();

};
#endif
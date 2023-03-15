#ifndef NINIOHH
#define NINIOHH

#include <iostream>
#include <set>
using namespace std;

class Objeto;

class Ninio{
    private:
        string nombre;
        int edad;
        string direccion;
        string telefono;
        set<Objeto*> objetos;
    public:
        Ninio(string nombre, int edad, string direccion, string telefono, set<Objeto*> objetos);
        Ninio(string nombre, int edad, string direccion, string telefono);
        string getNombre();
        int getEdad();
        string getDireccion();
        string getTelefono();
        void setNombre(string nombre);
        void setEdad(int edad);
        void setDireccion(string direccion);
        void setTelefono(string telefono);
        void addObjectoPrestado(Objeto* o);
        void removeObjetoPrestado(Objeto* o);
        set<string> listarObjetosPrestados();
};

#include "Objeto.hh"

#endif
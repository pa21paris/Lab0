#ifndef OBJETOHH
#define OBJETOHH

#include <iostream>
using namespace std;

enum Estado{Nuevo, BienConservado, Roto};

class Objeto{
    protected:
        string nombre;
        int anioComprado;
        Estado estado;
        Objeto(string nombre, int anioComprado, Estado estado){
            this->nombre=nombre;
            this->anioComprado=anioComprado;
            this->estado=estado;
        };
    public:
        virtual string toString()=0;
        string getNombre();
        void setNombre(string);
        int getAnioComprado();
        void setAnioComprado(int);
        Estado getEstado();
        void setEstado(Estado);
};

#endif
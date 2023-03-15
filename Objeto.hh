#ifndef OBJETOHH
#define OBJETOHH

#include <iostream>
#include "Ninio.hh"
#include "DTObjetoRoto.hh"
using namespace std;

enum Estado{Nuevo, BienConservado, Roto};

class Objeto{
    public:
        virtual string toString()=0;
        string getNombre();
        void setNombre(string);
        int getAnioComprado();
        void setAnioComprado(int);
        Estado getEstado();
        void setEstado(Estado);
        Ninio* getPrestadoA();
        void setPrestadoA(Ninio* prestadoA);
        ~Objeto();
        void setDtObjetoRoto(DTObjetoRoto* dtObjetoRoto);
        DTObjetoRoto* getDtObjetoRoto();
        static set<Objeto*> objetos;
    protected:
        string nombre;
        int anioComprado;
        Estado estado;
        Ninio* prestadoA;
        DTObjetoRoto* dtObjetoRoto;
        Objeto(string nombre, int anioComprado, Estado estado){
            this->nombre=nombre;
            this->anioComprado=anioComprado;
            this->estado=estado;
            this->prestadoA=nullptr;
            this->dtObjetoRoto=nullptr;
            objetos.insert(this);
        };

};

#endif
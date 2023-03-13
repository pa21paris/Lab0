#ifndef JUEGOMESAHH
#define JUEGOMESAHH

#include "Objeto.hh"
#include <iostream>
using namespace std;

class JuegoMesa : public Objeto{
    private:
        int edadRecomendada;
        int cantJugadores;
    public:
        JuegoMesa(string nombre, int anioComprado, Estado estado, int edadRecomendada, int cantJugadores);
        string toString();
        int getEdadRecomendada();
        void setEdadRecomendada(int);
        int getCantJugadores();
        void setCantJugadores(int);
};

#endif
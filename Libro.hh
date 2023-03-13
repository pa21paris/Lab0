#ifndef LIBROHH
#define LIBROHH

#include "Objeto.hh"
#include <iostream>
using namespace std;

class Libro : public Objeto{
    private:
        string autor;
        int cantPaginas;
    public:
        Libro(string nombre, int anioComprado, Estado estado, string autor, int cantPaginas);
        string toString();
        string getAutor();
        void setAutor(string);
        int getCantPaginas();
        void setCantPaginas(int);
};

#endif
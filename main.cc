#include "Objeto.hh"
#include "Libro.hh"
#include "JuegoMesa.hh"
#include <iostream>

using namespace std;

int main(){
    Libro l2=Libro("Librito2",2020,Nuevo,"Pablo",200);
    JuegoMesa j2=JuegoMesa("JuegoMesa2",2021,BienConservado,200,15);
    cout << l2.toString() << "\n";
    cout << j2.toString() << "\n";
}
#include "JuegoMesa.hh"

JuegoMesa::JuegoMesa(string nombre, int anioComprado, Estado estado,int edadRecomendada, int cantJugadores)
    : Objeto(nombre, anioComprado, estado){
    this->edadRecomendada=edadRecomendada;
    this->cantJugadores=cantJugadores;
}

string JuegoMesa::toString(){
    string estadoString;
    switch (this->estado)
    {
    case 0:
        estadoString="Nuevo";
        break;
    case 1:
        estadoString="Bien conservado";
        break;
    case 2:
        estadoString="Roto";
        break;
    }
    return "Libro: "+this->nombre+", "+std::to_string(this->anioComprado)
            +", "+estadoString+", "+std::to_string(this->edadRecomendada)+", "+std::to_string(this->cantJugadores);
}

int JuegoMesa::getEdadRecomendada() {
	return this->edadRecomendada;
}

void JuegoMesa::setEdadRecomendada(int edadRecomendada) {
	this->edadRecomendada = edadRecomendada;
}

int JuegoMesa::getCantJugadores() {
	return this->cantJugadores;
}

void JuegoMesa::setCantJugadores(int cantJugadores) {
	this->cantJugadores = cantJugadores;
}
#include "Objeto.hh"

string Objeto::getNombre(){
    return this->nombre;
}

void Objeto::setNombre(string nombre){
    this->nombre=nombre;
}

int Objeto::getAnioComprado() {
	return this->anioComprado;
}
void Objeto::setAnioComprado(int anioComprado) {
	this->anioComprado = anioComprado;
}

Estado Objeto::getEstado() {
	return this->estado;
}
void Objeto::setEstado(Estado estado) {
	this->estado = estado;
}



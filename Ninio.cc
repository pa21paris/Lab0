#include "Ninio.hh"

Ninio::Ninio(string nombre, int edad, string direccion, string telefono, set<Objeto*> objetos){
    this->nombre=nombre;
    this->edad=edad;
    this->direccion=direccion;
    this->telefono=telefono;
    this->objetos=objetos;
}

Ninio::Ninio(string nombre, int edad, string direccion, string telefono){
    this->nombre=nombre;
    this->edad=edad;
    this->direccion=direccion;
    this->telefono=telefono;
    set<Objeto*> setObjetos;
    this->objetos=setObjetos;
}

string Ninio::getTelefono() {
	return this->telefono;
}
void Ninio::setTelefono(string telefono) {
	this->telefono = telefono;
}

string Ninio::getDireccion() {
	return this->direccion;
}
void Ninio::setDireccion(string direccion) {
	this->direccion = direccion;
}

int Ninio::getEdad() {
	return this->edad;
}
void Ninio::setEdad(int edad) {
	this->edad = edad;
}

string Ninio::getNombre() {
	return this->nombre;
}
void Ninio::setNombre(string nombre) {
	this->nombre = nombre;
}

void Ninio::addObjectoPrestado(Objeto* o){
    this->objetos.insert(o);
    o->setPrestadoA(this);
}

void Ninio::removeObjetoPrestado(Objeto* o){
    this->objetos.erase(o);
    o->setPrestadoA(nullptr);
}

set<string> Ninio::listarObjetosPrestados(){
    set<string> res;
    set<Objeto*>::iterator it;
    for(it = this->objetos.begin();it != this->objetos.end();++it){
        res.insert((*it)->toString());
    }
    return res;
}
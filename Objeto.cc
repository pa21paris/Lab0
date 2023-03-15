#include "Objeto.hh"

set<Objeto*> Objeto::objetos;

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

Ninio* Objeto::getPrestadoA() {
	return this->prestadoA;
}
void Objeto::setPrestadoA(Ninio* prestadoA) {
	if(prestadoA==this->prestadoA) return;
	Ninio* ninioAntes=this->prestadoA;

	if(this->prestadoA==nullptr){
		this->prestadoA=prestadoA;
		prestadoA->addObjectoPrestado(this);
	}else{
		this->prestadoA=nullptr;
		ninioAntes->removeObjetoPrestado(this);
		if(prestadoA!=nullptr){
			this->prestadoA=prestadoA;
			prestadoA->addObjectoPrestado(this);
		}
	}
}

void Objeto::setDtObjetoRoto(DTObjetoRoto* dtObjetoRoto){
	this->dtObjetoRoto=dtObjetoRoto;
}

DTObjetoRoto* Objeto::getDtObjetoRoto(){
	if(this->dtObjetoRoto==nullptr && this->estado==Roto){
		DTObjetoRoto* dtoRoto=new DTObjetoRoto();
		dtoRoto->nombreObjeto=this->getNombre();
		if(this->prestadoA!=nullptr){
            dtoRoto->nombreNiño=this->prestadoA->getNombre();
            dtoRoto->prestado=true;
        }else{
            dtoRoto->prestado=false;
        }
		this->dtObjetoRoto=dtoRoto;
	}
	return this->dtObjetoRoto;
}

Objeto::~Objeto(){
	this->getPrestadoA()->removeObjetoPrestado(this);
	delete this->dtObjetoRoto;
	Objeto::objetos.erase(this);
}


#include "Libro.hh"

Libro::Libro(string nombre, int anioComprado, Estado estado, string autor, int cantPaginas)
    : Objeto(nombre, anioComprado, estado){
        this->autor=autor;
        this->cantPaginas=cantPaginas;
    }

string Libro::toString(){
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
            +", "+estadoString+", "+this->autor+", "+std::to_string(this->cantPaginas);
}

string Libro::getAutor() {
	return this->autor;
}
void Libro::setAutor(string autor) {
	this->autor = autor;
}

int Libro::getCantPaginas() {
	return this->cantPaginas;
}
void Libro::setCantPaginas(int cantPaginas) {
	this->cantPaginas = cantPaginas;
}


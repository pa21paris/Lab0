#include "DTObjetoRoto.hh"
using namespace std;

set<DTObjetoRoto*> DTObjetoRoto::setDT;

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& obj) {
    string prestadoString = obj.prestado ? "SI" : "NO";
    os << obj.nombreObjeto << ", Prestado " << prestadoString << ", ";
    if(obj.prestado){
        os << obj.nombreNiño;
    }
    return os;
}

DTObjetoRoto::DTObjetoRoto(){
    DTObjetoRoto::setDT.insert(this);
}

DTObjetoRoto::~DTObjetoRoto(){
    DTObjetoRoto::setDT.erase(this);
}
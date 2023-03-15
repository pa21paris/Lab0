#ifndef DTOOBJETOROTOHH
#define DTOOBJETOROTOHH

#include <iostream>
#include <set>
using namespace std;

class DTObjetoRoto{
    public:
        string nombreObjeto;
        bool prestado;
        string nombreNiño;
        static set<DTObjetoRoto*> setDT;
        DTObjetoRoto();
        ~DTObjetoRoto();
};
std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& obj);

#endif
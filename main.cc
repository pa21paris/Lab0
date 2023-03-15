#include "Objeto.hh"
#include "Libro.hh"
#include "JuegoMesa.hh"
#include "Ninio.hh"
#include "DTObjetoRoto.hh"
#include <iostream>

using namespace std;

void prueba(Objeto*& p,Objeto*& p1){
    if(p==p1){
        cout << "Bien\n";
    }else{
        cout << "Mal\n";
    }
}

int main(){
    Objeto* nacidosDeLaBruma=new Libro("Nacidos de la bruma: El imperio final",2022,Roto,"Brandon Sanderson",688);
    Objeto* lasMalas=new Libro("Las Malas",2022,Nuevo,"Camila Sosa Villada",240);
    Objeto* elCocodriloNoGustabaAgua=new Libro("El cocodrilo al que no le gustaba el agua",2016
                                                        ,Roto,"Gemma Merino",32);

    Objeto* juegoUno=new JuegoMesa("Juego Uno",2022,Roto,7,10);
    Objeto* mazoDeCartas=new JuegoMesa("Mazo de Cartas",2019,Nuevo,7,4);
    Objeto* dados=new JuegoMesa("Dados",2020,Roto,2,6);

    set<Objeto*>::iterator it;
    for(it=Objeto::objetos.begin(); it!=Objeto::objetos.end();++it){
        cout << (*it)->toString() << "\n";
    }

    Ninio* maria=new Ninio("María Laura",10,"Nueva Palmira 1521","099298190");
    Ninio* alex=new Ninio("Alex",5,"Humberto Primo 1501","29094141");

    maria->addObjectoPrestado(mazoDeCartas);
    maria->addObjectoPrestado(nacidosDeLaBruma);
    maria->addObjectoPrestado(dados);
    alex->addObjectoPrestado(juegoUno);
    alex->addObjectoPrestado(elCocodriloNoGustabaAgua);

    set<string>::iterator stringIt;
    set<string> stringSet=maria->listarObjetosPrestados();
    for(stringIt=stringSet.begin();stringIt!=stringSet.end();++stringIt){
        cout << (*stringIt) << "\n";
    }
    stringSet=alex->listarObjetosPrestados();
    for(stringIt=stringSet.begin();stringIt!=stringSet.end();++stringIt){
        cout << (*stringIt) << "\n";
    }

    for(it=Objeto::objetos.begin(); it!=Objeto::objetos.end();++it){
        if((*it)->getEstado()==Roto){
            (*it)->getDtObjetoRoto();
        }
    }
    
    set<DTObjetoRoto*>::iterator it2;
    for(it2=DTObjetoRoto::setDT.begin();it2!=DTObjetoRoto::setDT.end();++it2){
        cout << (*(*it2)) << "\n";
    }

    delete juegoUno;

    stringSet=alex->listarObjetosPrestados();
    for(stringIt=stringSet.begin();stringIt!=stringSet.end();++stringIt){
        cout << (*stringIt) << "\n";
    }

    for(it2=DTObjetoRoto::setDT.begin();it2!=DTObjetoRoto::setDT.end();++it2){
        cout << (*(*it2)) << "\n";
    }
}


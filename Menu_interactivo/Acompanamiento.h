//
// Created by Galo del Rio on 02/06/2023.
//

#ifndef ACOMPANAMIENTO_H_
#define ACOMPANAMIENTO_H_
#include "string.h"
#include <iostream>
#include <sstream>
#include "Comida.h"
using namespace std;


class Acompanamiento: public Comida{
private:
    string tipoAcopanamiento;
    string extras[100];
    int num_extras;

public:
    Acompanamiento(int precio_num, string tam, string _tipoAcompanamiento):Comida(precio_num, tam){
        tipoAcopanamiento = _tipoAcompanamiento;

    }
    void setTipoAcompanamiento(string tipoAcompanamiento);
    string getTipoAcompanamiento();

    void imprime_articulo();
    void agrega_extra(string nombre);

};



void Acompanamiento::setTipoAcompanamiento(string _tipoAcompanamiento){
    _tipoAcompanamiento=_tipoAcompanamiento;
}


string Acompanamiento::getTipoAcompanamiento (){
    return tipoAcopanamiento;
}


void Acompanamiento::imprime_articulo(){
    cout<<"\n"<<"#:"<<tipoAcopanamiento<<"\n"<<endl;
    cout<<"Precio:"<<precio<<""<<endl;
    cout<<"Tamano:"<<tamano<<""<<endl;
}

void Acompanamiento:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}

#endif

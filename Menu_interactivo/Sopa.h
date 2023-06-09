//
// Created by Galo del Rio on 22/05/2023.
//

#ifndef SOPA_H_
#define SOPA_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;


class Sopa: public Comida{
private:
    string tipoSopa, temperatura;
    string extras[100];
    int num_extras;


public:
    Sopa(int precio_num, string tam, string _tipoSopa, string _temperatura ):Comida(precio_num, tam){
        tipoSopa = _tipoSopa;
        temperatura = _temperatura;
    }
    void setTipoSopa(string tipoSopa);
    void setTemperatura(string temperatura);

    string getTipoSopa();
    string getTemperatura();

    void imprime_articulo();
    void agrega_extra (string nombre);


};

void Sopa::setTipoSopa(string _tipoSopa){
    tipoSopa=_tipoSopa;
}

void Sopa::setTemperatura(string _temperatura){
    temperatura = _temperatura;
}

string Sopa::getTipoSopa (){
    return tipoSopa;
}

string Sopa::getTemperatura (){
    return temperatura;
}

void Sopa::imprime_articulo(){
    cout<<"\n"<<"#:"<<tipoSopa<<"\n"<<endl;
    cout<<"Precio:"<<precio<<""<<endl;
    cout<<"Tamano:"<<tamano<<""<<endl;
    cout<<"Temepratura:"<<temperatura<<""<<endl;
}

void Sopa:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}


#endif
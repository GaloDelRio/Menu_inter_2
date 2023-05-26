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

public:
    Sopa(int precio_num, string tam, string _tipoSopa, string _temperatura ):Comida(precio_num, tam){
        tipoSopa = _tipoSopa;
        temperatura = _temperatura;
    }
    void setTipoSopa(string tipoSopa);
    void setTemperatura(string temperatura);

    string getTipoSopa();
    string getTemperatura();
  /*  string getSopa();*/

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

string Sopa::mensaje(int precio_num){
    cout<<"El precio"<<precio;

/*
string Sopa::getSopa(){
    stringstream aux;
    aux<<getComida();
    aux<<"Tipo de sopa: "<<tipoSopa<<endl;
    aux<<"Temperatura: "<<temperatura<<endl;
    return aux.str();*/
//

#endif;
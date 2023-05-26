//
// Created by Galo del Rio on 23/05/2023.
//

#ifndef ENSALADA_H_
#define ENSALADA_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;

class Ensalada:public Comida{
private:
    string tipoEnsalada,topping;

public:
    Ensalada(int precio_num, string tam,string _tipoEnsalada, string _topping ):Comida(precio_num, tam){
        tipoEnsalada = _tipoEnsalada;
        topping = _topping;
    }

    void setTipoEnsalada(string tipoEnsalada);
    void setTopping(string topping);

    string getTipoEnsalada ();
    string getTopping ();
   /* string getEnsalada();*/
};

void Ensalada::setTipoEnsalada(string _tipoEnsalada){
    tipoEnsalada = _tipoEnsalada;
}

void Ensalada::setTopping(string _topping){
    topping = _topping;
}

string Ensalada::getTipoEnsalada (){
    return tipoEnsalada;
}

string Ensalada::getTopping (){
    return topping  ;
}

string Ensalada::mensaje(int precio_num){
    cout<<"El precio"<<precio;


/*string Ensalada::getEnsalada(){
    stringstream aux;
    aux<<getComida();
    aux<<"Tipo de hoja: "<<tipoHoja<<endl;
    aux<<"Topping: "<<topping<<endl;
    return aux.str();
}*/

#endif
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
    string extras[100];
    int num_extras;

public:
    Ensalada(int precio_num, string tam,string _tipoEnsalada, string _topping ):Comida(precio_num, tam){
        tipoEnsalada = _tipoEnsalada;
        topping = _topping;
    }

    void setTipoEnsalada(string tipoEnsalada);
    void setTopping(string topping);

    string getTipoEnsalada ();
    string getTopping ();

    void imprime_articulo();
    void agrega_extra (string nombre);

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

void Ensalada::imprime_articulo() {
    cout << "\n" << "#:" << tipoEnsalada << "\n" << endl;
    cout << "Precio:" << precio << "" << endl;
    cout << "Tamano:" << tamano << "" << endl;
    cout << "Topping:" << topping << "" << endl;
}

void Ensalada:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}

#endif
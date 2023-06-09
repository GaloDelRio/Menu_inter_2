//
// Created by Galo del Rio on 22/05/2023.
//

#ifndef COMIDA_H_
#define COMIDA_H_
#include "string.h"
#include <sstream>
using namespace std;


//Declaracion de clase empleado que es abstracta
class Comida {
protected:
    int precio;
    string tamano;
    string extras[100];
    int num_extras;

public:
    Comida();
    Comida(int precio_num, string tam);

    void setTamano(string tam);
    void setPrecio(int precio_num);
    string getTamano();
    int getPrecio();
    virtual void imprime_articulo() = 0;
    virtual void agrega_extra(string nombre);

};

Comida::Comida(int precio_num, string tam){
    precio = precio_num;
    tamano = tam;
}

void Comida::setTamano(string tam){
    tamano=tam;
}

void Comida::setPrecio(int precio_num){
    precio=precio_num;
}

string Comida::getTamano(){
    return tamano;
}

int Comida::getPrecio(){
    return precio;
}

void Comida::imprime_articulo() {
   cout<<"Precio:"<<precio<<"\n"<<endl;
   cout<<"Tamano:"<<tamano<<"\n"<<endl;
}

void Comida:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}

#endif
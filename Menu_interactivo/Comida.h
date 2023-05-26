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


public:
    Comida();
    Comida(int precio_num, string tam);

    void setTamano(string tam);
    void setPrecio(int precio_num);
    string getTamano();
    int getPrecio();
/*    string getComida();*/
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

string Comida::mensaje(int precio_num){
    cout<<"El precio"<<precio;

}



#endif

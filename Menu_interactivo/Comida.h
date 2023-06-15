/*
 * Proyecto Nómina main
 * Galo Alejandro ndel Rio Viggiano
 * A01710791
 * 14/06/2022
 *
 * Esta clase define objeto de tipo Comida la cual se usa como clase
 * padre para heredar a las otras cuatro, los atributos de precio y tamaño junto
 * con los metodos de imprime_articulo y extra
 */


#ifndef COMIDA_H_
#define COMIDA_H_
#include "string.h"
#include <sstream>
using namespace std;


//Declaracion de clase comida que es abstracta
class Comida {

//Declaro variables de instancia
protected:
    int precio;
    string tamano;
    string extras[100];
    int num_extras;

//Declaro los métodos que va a tener el objeto
public:
    Comida(); //constructor por defualt
    Comida(int precio_num, string tam);

    void setTamano(string tam);
    void setPrecio(int precio_num);
    string getTamano();
    int getPrecio();
    virtual void imprime_articulo() = 0; //método abstracto será sobreescrito
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

/**
 * imprime_articulo tomas las variablesprecio y tamaño para mandarlas a imprimir
 * donde se manden a llamar.
 *
 * @param
 * @return
 */

void Comida::imprime_articulo() {
   cout<<"Precio:"<<precio<<"\n"<<endl;
   cout<<"Tamano:"<<tamano<<"\n"<<endl;
}

/**
 * agrega un nombre a la lista de extras de una comida, incrementa la cuenta de extras
 * y muestra el nombre del extra agregado.
 * @param string de tipo nombre
 * @return
 */


void Comida:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}

#endif // COMIDA_H_
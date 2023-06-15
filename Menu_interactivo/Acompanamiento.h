/*
 * Proyecto Nómina main
 * Galo Alejandro ndel Rio Viggiano
 * A01710791
 * 14/06/2022
 *
 * Este es un proyecto demo para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que captura diferentes tipos de empleados con sus
 * respectivos sueldos, y nos permite calcular la nómina para cada tipo de
 * empleado diferente.
 */


#ifndef ACOMPANAMIENTO_H_
#define ACOMPANAMIENTO_H_
#include "string.h"
#include <iostream>
#include <sstream>
#include "Comida.h" // bibliotecas con objetos de mi proyecto.
using namespace std;

//Declaro el objeto Sopa que hereda de Comida
class Acompanamiento: public Comida{
private:
    string tipoAcopanamiento;
    string extras[100];
    int num_extras;

//Variables de instancia privadas del objeto
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

/**
 * imprime_articulo tomas las variables precio, tamaño y tipo Acompañamiento a para mandarlas a imprimir
 * donde se manden a llamar.
 *
 * @param
 * @return
 */


void Acompanamiento::imprime_articulo(){
    cout<<"\n"<<"#:"<<tipoAcopanamiento<<"\n"<<endl;
    cout<<"Precio:"<<precio<<""<<endl;
    cout<<"Tamano:"<<tamano<<""<<endl;
}

/**
 * agrega un nombre a la lista de extras de una comida, incrementa la cuenta de extras
 * y muestra el nombre del extra agregado.
 * @param string de tipo nombre
 * @return
 */

void Acompanamiento:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}

#endif

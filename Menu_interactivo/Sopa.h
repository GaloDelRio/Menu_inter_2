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


#ifndef SOPA_H_
#define SOPA_H_
#include "string.h"
#include <sstream>
#include "Comida.h"   // bibliotecas con objetos de mi proyecto.
using namespace std;


//Declaro el objeto Sopa que hereda de Comida
class Sopa: public Comida{


    //Variables de instancia privadas del objeto
private:
    string tipoSopa, temperatura;
    string extras[100];
    int num_extras;


    //Metodos públicos del objeto
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

/**
 * imprime_articulo tomas las variables precio, tamaño, tipoSopa y temperatura para mandarlas a imprimir
 * donde se manden a llamar.
 *
 * @param
 * @return
 */

void Sopa::imprime_articulo(){
    cout<<"\n"<<"#:"<<tipoSopa<<"\n"<<endl;
    cout<<"Precio:"<<precio<<""<<endl;
    cout<<"Tamano:"<<tamano<<""<<endl;
    cout<<"Temepratura:"<<temperatura<<""<<endl;
}

/**
 * agrega un nombre a la lista de extras de una comida, incrementa la cuenta de extras
 * y muestra el nombre del extra agregado.
 * @param string de tipo nombre
 * @return
 */

void Sopa:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}


#endif
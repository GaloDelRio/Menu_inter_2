/*
 * Proyecto Nómina main
 * Galo Alejandro ndel Rio Viggiano
 * A01710791
 * 14/06/2022
 *
 * Este es un proyecto demo para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que crea distintos objetos
 */


#ifndef PLATOFUERTE_H_
#define PLATOFUERTE_H_
#include "string.h"
#include <sstream>
#include "Comida.h"  // bibliotecas con objetos de mi proyecto.
using namespace std;

//Declaro el objeto Sopa que hereda de Comida
class PlatoFuerte:public Comida{

//Variables de instancia privadas del objeto
private:
    string tipoCarne, termino;
    string extras[100];
    int num_extras;

//Metodos públicos del objeto
public:
    PlatoFuerte(int precio_num, string tam, string _tipoCarne, string _termino):Comida(precio_num, tam){
        tipoCarne=_tipoCarne;
        termino=_termino;
    }


    void setTipoCarne(string tipoCarne);
    void setTermino(string termino);

    string getTipoCarne();
    string getTermino();

    void imprime_articulo();
    void agrega_extra (string nombre);
};

void PlatoFuerte::setTipoCarne(string _tipoCarne){
    tipoCarne=_tipoCarne;
}

void PlatoFuerte::setTermino(string _termino){
    termino = _termino;
}

string PlatoFuerte::getTipoCarne(){
    return tipoCarne;
}

string PlatoFuerte::getTermino(){
    return termino  ;
}

/**
 * imprime_articulo tomas las variables precio, tamaño, tipoCarne y temperatura para mandarlas a imprimir
 * donde se manden a llamar.
 *
 * @param
 * @return
 */

void PlatoFuerte::imprime_articulo() {

    cout << "\n" << "#:" <<tipoCarne << "\n" << endl;
    cout << "Precio:" << precio << "" << endl;
    cout << "Tamano:" << tamano << "" << endl;
    cout << "Termino:" << termino << "" << endl;
}

/**
 * agrega un nombre a la lista de extras de una comida, incrementa la cuenta de extras
 * y muestra el nombre del extra agregado.
 * @param string de tipo nombre
 * @return
 */

void PlatoFuerte:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}


#endif
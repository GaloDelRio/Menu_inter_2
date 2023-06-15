/*
 * Proyecto Nómina main
 * Galo Alejandro ndel Rio Viggiano
 * A01710791
 * 14/06/2022
 *
 * Esta clase defina objeto de tipo Empleado que contiene las clases heredadas
 * Asalariado, PorHora y Practicante.
 */


#ifndef ENSALADA_H_
#define ENSALADA_H_
#include "string.h"
#include <sstream>
#include "Comida.h" // bibliotecas con objetos de mi proyecto.
using namespace std;

//Declaro el objet Ensalada que hereda de Comida
class Ensalada:public Comida{

    //Variables de instancia privadas del objeto
private:
    string tipoEnsalada,topping;
    string extras[100];
    int num_extras;

    //Metodos públicos del objeto
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

/**
 * imprime_articulo tomas las variables precio, tamaño, tamaño, tipo ensalada y topping para mandarlas a imprimir
 * donde se manden a llamar.
 *
 * @param
 * @return
 */

void Ensalada::imprime_articulo() {
    cout << "\n" << "#:" << tipoEnsalada << "\n" << endl;
    cout << "Precio:" << precio << "" << endl;
    cout << "Tamano:" << tamano << "" << endl;
    cout << "Topping:" << topping << "" << endl;
}

/**
 * agrega un nombre a la lista de extras de una comida, incrementa la cuenta de extras
 * y muestra el nombre del extra agregado.
 * @param string de tipo nombre
 * @return
 */

void Ensalada:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}

#endif
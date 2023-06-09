#ifndef PLATOFUERTE_H_
#define PLATOFUERTE_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;

class PlatoFuerte:public Comida{
private:
    string tipoCarne, termino;
    string extras[100];
    int num_extras;

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

//string PlatoFuerte::mensaje(int precio_num){
//    cout<<"El precio"<<precio;


void PlatoFuerte::imprime_articulo() {

    cout << "\n" << "#:" <<tipoCarne << "\n" << endl;
    cout << "Precio:" << precio << "" << endl;
    cout << "Tamano:" << tamano << "" << endl;
    cout << "Termino:" << termino << "" << endl;
}

void PlatoFuerte:: agrega_extra (string nombre){
    extras[num_extras] = nombre;
    num_extras++;
    cout << nombre;
}


#endif
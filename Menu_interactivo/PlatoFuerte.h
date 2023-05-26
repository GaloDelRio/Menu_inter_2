#ifndef PLATOFUERTE_H_
#define PLATOFUERTE_H_
#include "string.h"
#include <sstream>
#include "Comida.h"
using namespace std;

class PlatoFuerte:public Comida{
private:
    string tipoCarne, termino;

public:
    PlatoFuerte(int precio_num, string tam, string _tipoCarne, string _termino):Comida(precio_num, tam){
        tipoCarne=_tipoCarne;
        termino=_termino;
    }


    void setTipoCarne(string tipoCarne);
    void setTermino(string termino);

    string getTipoCarne();
    string getTermino();

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

string PlatoFuerte::mensaje(int precio_num){
    cout<<"El precio"<<precio;


/*
string PlatoFuerte::getPlatoFuerte(){
    stringstream aux;
    aux<<getComida();
    aux<<"Tipo de carne: "<<tipoCarne<<endl;
    aux<<"Termino: "<<termino<<endl;
    return aux.str();
}
*/

#endif
//
// Created by Galo del Rio on 21/05/2023.
//
#include <iostream>
#include <cmath>
#include "Sopa.h"
#include "Ensalada.h"
#include "PlatoFuerte.h"
#include "Acompanamiento.h"
using namespace std;


int main(){
    cout<<"===================================================================================="<<endl;
    cout<<"                                 Menu interactivo                                   "<<endl;
    cout<<"===================================================================================="<<endl;
    cout<<""<<endl;
    cout<<"En este menu interactivo vas a poder elegir entre varias opciones con el fin de poder sacar el precio final"<<endl;
    cout<<""<<endl;

    Comida *series[10];
    series[0] = new Sopa(150, "grande", "Ramen", "Caliente");
    series[0] -> imprime_articulo();
    series[0] -> agrega_extra("Hola");
    series[2] = new Sopa(150, "pequeno", "Sopa de Tomate", "Fria");
    series[2] -> imprime_articulo();
    series[3] = new Ensalada(150, "grande", " Ensalda Cesar", "caliente");
    series[3] -> imprime_articulo();
    series[4]= new PlatoFuerte (150, "grande", "Arrachera", "caliente");
    series[4] -> imprime_articulo();
    series[4]= new PlatoFuerte (150, "grande", "Arrachera", "caliente");
    series[4] -> imprime_articulo();
    series[5]= new Acompanamiento (150, "grande", "Arrachera");
    series[5] -> imprime_articulo();

//    double Variable = series[0]-> getPrecio();

    int op;

//    Usando punteros tenia pensado tomar directamente las variables de precio de las clases de alimentos ya creados, p'ara crear la cuenta

    while (true){
        cout<<"Cual de estos te gustaria comprar?";cin>>op;
        if(op==1){
            cout<<"1"<<endl;

        }else if(op==2){
            cout<<"2"<<endl;

        }else if(op==3){
            cout<<"3"<<endl;

        }else if(op==4){
            cout<<"4"<<endl;

        }else if(op==5){
            break;
        }else{
            cout<<"\nOpcion invalida, prueba de nuevo\n"<<endl;
        }
    }
    return 0;
}
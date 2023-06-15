/*
 * Proyecto Nómina main
 * Galo Alejandro ndel Rio Viggiano
 * A01710791
 * 14/06/2022
 *
 * Este es un proyecto para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que apartir de la creación de objetos a los cuales se les
 * aplica  funciones con aspectos de clases abstractas, polimorfismno, sobreescritura y sobrecarcas
 * Crea un menu interactivo con el cual se le pueden crear variar funciines para trabajar con el mismo,
 * con el proposito de simplificar el mismo, este solo muestra unos ejemplos de los objetos que se pueden crear
 * Además de utilizarlos en un menu a base de un ciclo while y condicioneles/ (If/else if/else)
 *
 */

#include <iostream>  // para imprimir.
#include "Sopa.h"   // bibliotecas con objetos de mi proyecto.
#include "Ensalada.h"
#include "PlatoFuerte.h"
#include "Acompanamiento.h"
using namespace std;


int main(){
    cout<<"\n===================================================================================="<<endl;
    cout<<"                                 Menu interactivo                                   "<<endl;
    cout<<"===================================================================================="<<endl;
    cout<<""<<endl;
    cout<<"En este menu interactivo vas a poder elegir entre varias opciones con el fin de poder "<<endl;
    cout<<"sacar el precio final, este programa solo toma numeros enteros del 1 al 5 para facilitar\nla navegacion por el menu"<<endl;
    cout<<""<<endl;

    Comida *Com[15];
    Com[0] = new Sopa(150, "grande", "Ramen", "Caliente");
    Com[0] -> imprime_articulo();
    Com[0] -> agrega_extra("Hola");
    Com[1] = new Sopa(100, "pequeno", "Sopa de Tomate", "Fria");
    Com[1] -> imprime_articulo();
    Com[2] = new Sopa(125, "pequeno", "Sopa de Verduras", "Fria");
    Com[2] -> imprime_articulo();
    Com[3] = new Ensalada(100, "grande", " Ensalda Cesar", "caliente");
    Com[3] -> imprime_articulo();
    Com[4] = new Ensalada(110, "grande", " Ensalda Cesar", "caliente");
    Com[4] -> imprime_articulo();
    Com[5]= new PlatoFuerte (170, "grande", "Arrachera", "caliente");
    Com[5] -> imprime_articulo();
    Com[6]= new PlatoFuerte (120, "pequeños", "Moletes", "caliente");
    Com[6] -> imprime_articulo();
    Com[7]= new PlatoFuerte (70, "grande", "Tamales", "caliente");
    Com[7] -> imprime_articulo();
    Com[8]= new Acompanamiento (150, "pequena", "Frijoles");
    Com[8] -> imprime_articulo();
    Com[9]= new Acompanamiento (150, "pequena", "Arroz");
    Com[9] -> imprime_articulo();

//    double Variable = series[0]-> getPrecio();
    int op;
    int op2;
    string op3;
    int op4;
    int pago;
    pago=0;

    int cuenta;
    cuenta=0;
    int final;
    final=0;

    while (true){
        cout<<"=================================================="<<endl;
        cout<<"                     Opciones"<<endl;
        cout<<"=================================================="<<endl;
        cout<<"\n1)Sopa \n2)Ensalada \n3)Plato fuerte \n4)Acompanamiento \n5)Ninguno/Ir a pagar \n"<<endl;
        cout<<"El cuenta es de: "<< cuenta << "$"<< endl;
        cout<<"Cual de estos te gustaria comprar?";cin>>op;

        if(op==1){
            while (true){
                cout << "\nPara las Sopas tenemos tres opciones\n \n1) Ramen \n2) Sopa de tomate \n3) Sopa de verduras\n" <<endl;
                cout<<"Cual de estos te gustaria comprar?";cin>>op2;
                if (op2 == 1){
                    int x = Com[0]-> getPrecio();
                    cuenta=cuenta+x;
                    break;
                }
                else if(op2 == 2){
                    int x = Com[1]-> getPrecio();
                    cuenta=cuenta+x;
                    break;
                }
                else if (op2==3){
                    int x = Com[2]-> getPrecio();
                    cuenta=cuenta+x;
                    break;
                }
                else {
                    cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
                }
            }
        }else if(op==2){
            cout << "\nPara las Ensaladas tenemos dos  opciones\n \n1) Cesar \n2) Rusa \n" <<endl;
            cout<<"Cual de estos te gustaria comprar?";cin>>op2;
            if (op2 == 1){
                int x = Com[3]-> getPrecio();
                cuenta=cuenta+x;

            }
            else if(op2 == 2){
                int x = Com[4]-> getPrecio();
                cuenta=cuenta+x;

            }
            else {
                cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            }
        }else if(op==3){
            cout << "\nPara los Platos Fuertes tenemos dos  opciones\n \n1) Arrachera \n2) Molletes \n3) Tamales? \n" <<endl;
            cout<<"Cual de estos te gustaria comprar?";cin>>op2;
            if (op2 == 1){
                int x = Com[5]-> getPrecio();
                cuenta=cuenta+x;

            }
            else if(op2 == 2){
                int x = Com[6]-> getPrecio();
                cuenta=cuenta+x;

            }

            else if(op2 == 3){
                int x = Com[7]-> getPrecio();
                cuenta=cuenta+x;
            }

            else {
                cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            }
        }else if(op==4){
            cout << "\nPara los Acompañamiento tenemos dos  opciones\n \n1) Frijoles \n2) Arroz \n" <<endl;
            cout<<"Cual de estos te gustaria comprar?";cin>>op2;
            if (op2 == 1){
                int x = Com[8]-> getPrecio();
                cuenta=cuenta+x;

            }
            else if(op2 == 2){
                int x = Com[9]-> getPrecio();
                cuenta=cuenta+x;

            }
            else {
                cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            }

        }else if(op==5) {
            cout << "\nTe gustaria agragar propina: Y/N ";
            cin >> op3;
            if (op3 == "Y") {
                cout << "\nPara la propina tenemoas 3 opciones\n \n1) 10% \n2) 25% \n3) 50%\n\n Elije una opcion:";
                cin >> op4;
                if (op4 == 1) {
                    cuenta = cuenta * 1.1;
                    cout << "El costo total ahora es de " << cuenta << "\n" << endl;
                } else if (op4 == 2) {
                    cuenta = cuenta * 1.25;
                    cout << "El costo total ahora es de " << cuenta << "\n" << endl;
                } else if (op4 == 3) {

                    cuenta = cuenta * 1.5;
                    cout << "El costo total ahora es de " << cuenta << "\n" << endl;

                } else {
                    cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
                }
            } else if (op3 == "N") {
                cout << "No se agregara propina" << endl;

            } else {
                cout << "Se ingreso un valor incorrecto, trate de nuevo" << endl;
            }


            cout << "Con cuanto vas a pagar: "; cin >> pago;
            final=cuenta-pago;
            if (pago >= cuenta){
                cout << "Su orden se ha realixado con exito, esta es su propina: " << final <<"\n"<<endl;
                break;
                }
                else {
                    cout << "Se ingreso un valor incorrecto, trate de nuevo, el pago es menor que la cuenta le faltan "<< cuenta << endl;
                }


        }else{
            cout<<"\nOpcion invalida, prueba de nuevo\n"<<endl;
        }
    }
    return 0;
}

#include "Cuenta.h"

using namespace std;

Cuenta :: Cuenta(string nombre, int edad, int dni, float cantidad) : Persona(nombre, edad, dni){

    this->cantidad = cantidad;
}

Cuenta::Cuenta() {

}

Cuenta::~Cuenta() {

}

void Cuenta::setCantidad(string nombre, int edad, int dni, float cantidad){


    Persona::asignarNombre(nombre);
    Persona::asignarEdad(edad);
    Persona::asignarDni(dni);


    this->cantidad = this->cantidad + cantidad;

    if(cantidad <0){
        cout<<"Invalido"<<endl;
    }


}

void  Cuenta :: getCantidadRetirar(float cantidad){


    if(this->cantidad < cantidad || this->cantidad <=0){

    }
    this->cantidad = this->cantidad - cantidad;



}

void Cuenta::mostrar() {
    Persona::mostrar();
    cout<< "La cantidad en cuenta es: "<< this->cantidad << endl;

}
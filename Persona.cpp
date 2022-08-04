
#include "Persona.h"

using namespace std;

Persona :: Persona (string nombre, int edad, int dni){

    this->nombre = nombre;
    this->edad = edad;
    this->dni = dni;
}

Persona :: Persona(){}

Persona :: ~Persona(){}

void Persona :: mostrar (){

    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"Dni: "<<this->dni<<endl;

}
bool Persona::EsMayorDeEdad() {

    if(this->edad >= 18)
        return 0;
    else
        return 1;
}
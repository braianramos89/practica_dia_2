

#include "CuentaJoven.h"




CuentaJoven::CuentaJoven() {

}

CuentaJoven::~CuentaJoven() {

}

CuentaJoven ::CuentaJoven(string nombre,int edad, int dni, float cantidad, int bonificacion ) : Cuenta(nombre,edad,dni,cantidad) {

    this->bonificacion = bonificacion;

}

bool CuentaJoven::EsTitularValido(){


    if((Persona::EsMayorDeEdad())&& (Persona::geterEdad() < 25))
        return 0;
    else
        return 1;

}


void CuentaJoven ::mostrar() {

    Cuenta::mostrar();
    cout<< "Cuenta Joven "<< this->bonificacion <<"%"<<endl;

}


void CuentaJoven ::setBonificacion(string nombre, int edad, int dni, float cantidad, int bonificacion ) {

    Cuenta::setCantidad(nombre,edad,dni,cantidad);

    this->bonificacion = bonificacion;

}


void CuentaJoven::setCantidad(string nombre, int edad, int dni, float cantidad) {

    cantidad = Cuenta::getCantidadTotal();

    cantidad = (-1) * ((cantidad * (this->bonificacion))/100);

    Cuenta::setCantidad(nombre,edad, dni,cantidad);

}

void CuentaJoven::getCantidadRetirar(float cantidadRetirar) {
    if(EsTitularValido()==0){
        Cuenta::getCantidadRetirar(cantidadRetirar);
    }

    else{
        cout<<"No es titular"<< endl;
    }


}
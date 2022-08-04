
#include <iostream>

int main() {
    /*
    Persona persona1("Nicolas",33,34211868);
    persona1.mostrar();
    //cout <<persona1.EsMayorDeEdad();
    Persona persona2;
    persona2.asignarNombre("Nico");
    persona2.asignarEdad(23);
    persona2.asignarDni(37948670);
    persona2.mostrar();

    Cuenta cuenta1("Nicolas", 33,333333,20.4);


    cuenta1.getCantidadRetirar(10);
    cuenta1.mostrar();

    cuenta1.mostrar();

    Cuenta cuenta2;
    cuenta2.setCantidad("nicolas",2323,2323,50.0);

    cuenta2.mostrar();
        */
    CuentaJoven cuentaJoven1("nicolas",20,11111,50.0,10);

   /* cuentaJoven1.mostrar();

    cuentaJoven1.setCantidad("nicolas",20,11111,50.0);

    cuentaJoven1.mostrar();*/

    cuentaJoven1.mostrar();

   cuentaJoven1.getCantidadRetirar(30.0);

    return 0;
}

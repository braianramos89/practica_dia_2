

#ifndef TEMPLATECPP_CUENTAJOVEN_H
#define TEMPLATECPP_CUENTAJOVEN_H
#include "Cuenta.h"


using namespace std;


class CuentaJoven : public Cuenta{

private:
    int bonificacion;

public:
    CuentaJoven();
    CuentaJoven(string, int , int ,float, int);
    ~CuentaJoven();
    bool EsTitularValido();
    void mostrar();
    void setBonificacion(string, int , int ,float, int );
    int getBonificacion();
    void setCantidad(string, int, int , float);
    void getCantidadRetirar(float);

};

inline int CuentaJoven::getBonificacion() {

    return (this->bonificacion);

}





#endif


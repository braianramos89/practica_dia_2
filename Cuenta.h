

#ifndef TEMPLATECPP_CUENTA_H
#define TEMPLATECPP_CUENTA_H
#include "Persona.h"


using namespace std;

class Cuenta : public Persona {

private:
    float cantidad;
public:
    Cuenta();
    Cuenta(string , int , int , float);
    ~Cuenta();

    virtual void setCantidad (string , int , int ,float);
    float getCantidadTotal ();
    virtual void getCantidadRetirar (float);

    void mostrar();
};


 inline float Cuenta::getCantidadTotal(){

     return (this->cantidad);

 }





#endif
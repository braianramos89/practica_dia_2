
#ifndef TEMPLATECPP_PERSONA_H
#define TEMPLATECPP_PERSONA_H

#include <iostream>
using namespace std;

class Persona{

private:
    string nombre;
    int edad;
    int dni;

public:

    Persona();
    Persona (string, int , int);
    ~Persona();

    void asignarNombre(string);
    void asignarDni(int);
    void asignarEdad(int);

    string geterNombre();
    int geterDni();
    int geterEdad();


    virtual void mostrar();

    bool EsMayorDeEdad();

};

inline void Persona::asignarNombre (string nombre){

    this->nombre = nombre;
}
inline void Persona::asignarEdad (int edad){

    this->edad = edad;
}
inline void Persona::asignarDni (int dni){

    this->dni = dni;
}

inline string Persona :: geterNombre(){

    return(this->nombre);
}

inline int Persona :: geterDni(){

    return(this->dni);
}

inline int Persona :: geterEdad(){

    return(this->edad);
}


#endif

//
//  Maestro.h
//  Actividad4_Herencia
//
//  Created by Lydia Delgado uriarte  & Hugo Edgar Palomares on 20/05/21.
//

#ifndef Maestro_h
#define Maestro_h
#include "Persona.h"
using namespace std;

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        string getDepto();
        void setDepto(string);
        void muestraDatos();
    private:
        string depto;
};

//metodos Maestro
Maestro::Maestro(): Persona(){
    depto = "-";
}

Maestro::Maestro(string n , int e, string d): Persona(n, e){
    nombre = n;
    edad = e;
    depto = d;
}

//Getters
string Maestro::getDepto(){return depto;}
//Setters
void Maestro::setDepto(string _depto){depto= _depto;}

//Imprime datos
void Maestro::muestraDatos(){
    cout << "Nombre\tEdad\tDepartamento" << endl;
    cout << nombre << "\t" << edad << "\t" << depto << endl;
};

#endif /* Maestro_h */

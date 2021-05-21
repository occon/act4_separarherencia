//
//  Estudiante.h
//  Actividad4_Herencia
//
//  Created by Lydia Delgado Uriarte & Hugo Edgar Palomares on 20/05/21.
//

#ifndef Estudiante_h
#define Estudiante_h
#include "Persona.h"
class Estudiante: public Persona{
    public:
        Estudiante();
        Estudiante(string, int, string);
        string getCarrera();
        void setCarrera(string);
        void muestraDatos();
    private:
        string carrera;
};

// metodos Estudiante
string Estudiante::getCarrera(){return carrera;}
void Estudiante::muestraDatos(){
    cout << "Nombre\tEdad\tCarrera" << endl;
    cout << nombre << "\t" << edad << "\t\t" << carrera << endl;
};

void Estudiante::setCarrera(string _carrera){carrera= _carrera;}
Estudiante::Estudiante(): Persona() {
    nombre = "nobody";
    edad = 0;
    carrera = "ninguna";
};
Estudiante::Estudiante(string n, int e, string c): Persona(n,e){
    nombre = n;
    edad = e;
    carrera = c;
};


#endif /* Estudiante_h */

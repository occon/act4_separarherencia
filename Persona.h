//
//  Persona.h
//  Actividad4_Herencia
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 20/05/21.
//

#ifndef Persona_h
#define Persona_h
using namespace std;

class Persona{
    public:
        Persona();
        Persona(string, int);
        string getNombre();
        void setNombre(string);
        int getEdad();
        void setEdad(int);
    protected:
        string nombre;
        int edad;
};

// metodos Persona

Persona::Persona(){
    nombre = "nobody";
    edad = 0;
};
Persona::Persona(string n, int e){
    nombre = n;
    edad = e;
};

//Getters
string Persona::getNombre(){return nombre;}
int Persona::getEdad(){return edad;}

//Setters
void Persona::setNombre(string _nombre){nombre=_nombre;}
void Persona::setEdad(int _edad){edad=_edad;}

#endif /* Persona_h */

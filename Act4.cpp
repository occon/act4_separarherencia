//
//  main.cpp
//  Actividad4_Herencia
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares on 17/05/21.
//

#include <iostream>
#include "Maestro.h"
#include "Estudiante.h"

using namespace std;

//Agregar maestros
void agregarMaestro(Maestro listaMaestros[0], int cantMaestros){
    int i=cantMaestros,edad;
    string nombre, depto;
    cout << endl << "Nombre del maestro a registrar: ";
    cin >> nombre;
    cout << "Edad: " ;
    cin >> edad;
    cout << "Departamento: ";
    cin >> depto;
    listaMaestros[i].setNombre(nombre);
    listaMaestros[i].setEdad(edad);
    listaMaestros[i].setDepto(depto);
    cout << "Escribe * para dejar de registrar, 1 o cualquier otro caracter para continuar " ;
}

//Agregar estudiantes

void agregarEstudiante(Estudiante listaEstudiantes[0],int cantE){
    int i=cantE, edad;
    string nombre, carrera;
    cout << endl << "Nombre del alumno a registrar: ";
    cin >> nombre;
    cout << "Edad: ";
    cin >> edad;
    cout << "Carrera: ";
    cin >> carrera;
    listaEstudiantes[i].setNombre(nombre);
    listaEstudiantes[i].setEdad(edad);
    listaEstudiantes[i].setCarrera(carrera);
    cout << "Escribe * para dejar de registrar, 1 o cualquier otro caracter para continuar " ;

};


//Mostrar maestros
void mostrarMaestros(Maestro listaMaestros[], int cantM){
    cout << endl << "\tLista de maestros \t" << endl;
    for (int i=0 ; i<cantM; i++){
        cout << "----------------------------" << endl;
        listaMaestros[i].muestraDatos();
        cout << "----------------------------"<<endl;
    }

}

//Mostrar estudiantes
void mostrarEstudiantes(Estudiante listaEstudiantes[],int cantE){
    cout << endl << "\tLista de estudiantes \t" << endl;
    for (int i=0; i<cantE; i++){
        cout << "----------------------------" << endl;
        listaEstudiantes[i].muestraDatos();
        cout << "----------------------------" << endl;
        cout << endl;
    }
}
//main
int main(){
    int cantMaestros=0, cantEstudiantes=0;
    char opcion;
    char continuar='0';
    Maestro listaMaestros[cantMaestros];
    Estudiante listaEstudiantes[cantEstudiantes];
    do{
        cout << endl;
        cout << "-----------MENU-----------"<< endl;
        cout << " 1) Registrar maestros " << endl;
        cout << " 2) Registrar estudiantes " << endl;
        cout << " 3) Consultar maestros" << endl;
        cout << " 4) Consultar estudiantes"<< endl;
        cout << " 5) Terminar " << endl;
        cin >> opcion;
        switch (opcion){
            case '1':
                for (int i=cantMaestros; continuar!='*'; i=cantMaestros++){
                    agregarMaestro(listaMaestros, cantMaestros);
                    cin >> continuar;
                }
                continuar='0';
                break;
            case '2':
                for (int i=cantEstudiantes; continuar!='*'; i=cantEstudiantes++){
                    agregarEstudiante(listaEstudiantes, cantEstudiantes);
                    cin >> continuar;
                }
                continuar= '0';
                break;
            case '3':
                if (cantMaestros==0){
                    cout << "No hay ningun maestro registrado" << endl;
                }
                else{
                    mostrarMaestros(listaMaestros, cantMaestros);
                }
                break;
                
            case '4':
                if (cantEstudiantes==0){
                    cout << "No hay ningun estudiante registrado" << endl;
                }
                else{
                    mostrarEstudiantes(listaEstudiantes, cantEstudiantes);
                }
                break;
            case '5':
                break;
        }
    } while (opcion!= '5');
    return 0;
};

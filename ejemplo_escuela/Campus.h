#ifndef CAMPUS_H
#define CAMPUS_H

#include <iostream>
#include <string>
#include <vector>
#include "Miembro.h"
#include "Alumno.h"
#include <typeinfo>

using namespace std;

class Campus {

    private:
        string nombre;
        string ubicacion;
        /*
        Para que el uso de métodos virtuales funcione y se pueda
        interpretar a un "Miembro" como cualquiera de sus clases
        hijas, se debe usar como "apuntador" a Miembro, por eso
        el *
        */
        vector<Miembro*> integrantes;

    public:
        //Constructores
        Campus() {
            nombre = "Querétaro";
            ubicacion = "Epigmenio Gonzalez";
        }

        Campus(string nom, string ub){
            nombre = nom;
            ubicacion = ub;
        }

        // Getters
        string getNombre() {
            return nombre;
        }

        string getUbicacion() {
            return ubicacion;
        }

        vector<Miembro*> getIntegrantes() {
            return integrantes;
        }

        //Setters
        void setNombre(string nom) {
            nombre = nom;
        }

        void setUbicacion(string ub) {
            ubicacion = ub;
        }

        // Metodos
        // Recibe un apuntador a un objeto de clase "Miembro" (incluyendo sus hijos)
        void agregarIntegrante(Miembro* integrante) {
            integrantes.push_back(integrante);
        }

        void mostrarIntegrantes() {

            for(int i = 0; i < integrantes.size(); i++) {
                /*
                Cuando trabajamos con apuntadores, los atributos y métodos del objeto
                se obtienen con el operador "->" en lugar de "."
                */
                integrantes[i]->imprimeDatos();
                cout << endl;
            }

        }

};

#endif
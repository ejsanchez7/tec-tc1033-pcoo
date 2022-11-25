#ifndef CAMPUS_H
#define CAMPUS_H

#include <iostream>
#include <string>
#include <vector>
#include "Miembro.h"

using namespace std;

class Campus {

    private:
        string nombre;
        string ubicacion;
        vector<Miembro> integrantes;

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

        vector<Miembro> getIntegrantes() {
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
        void agregarIntegrante(Miembro integrante) {
            integrantes.push_back(integrante);
        }

        void mostrarIntegrantes() {

            for(int i = 0; i < integrantes.size(); i++) {
                cout << integrantes[i].getId() << "\t" << integrantes[i].getNombre() << endl;
            }

        }

};

#endif
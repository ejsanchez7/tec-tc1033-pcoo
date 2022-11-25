#ifndef MATERIA_H
#define MATERIA_H

using namespace std;
#include <string>

class Materia {

    private:
        string nombre;
    
    public:
        Materia() {
            nombre = "";
        }

        //Getters
        string getNombre() {
            return nombre;
        }

        //Setters
        void setNombre(string nom) {
            nombre = nom;
        }

};

#endif
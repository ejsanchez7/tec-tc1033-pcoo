#ifndef MIEMBRO_H
#define MIEMBRO_H

using namespace std;
#include <string>

class Miembro {

    private:
        string id;
        string nombre;
        int edad;
        string genero;

    public:
        //Constructores
        Miembro(){
            id = "";
            nombre = "";
            edad = 18;
            genero = "";
        }

        Miembro(string idx, string nom, int ed, string gen) {
            id = idx;
            nombre = nom;
            edad = ed;
            genero = gen;
        }

        //Getters
        string getId() {
            return id;
        }

        string getNombre() {
            return nombre;
        }

        int getEdad() {
            return edad;
        }

        string getGenero() {
            return genero;
        }

        //Setters
        void setId(string idx) {
            id = idx;
        }

        void setNombre(string nom) {
            nombre = nom;
        }

        void setEdad(int ed) {
            edad = ed;
        }

        void setGenero(string gen) {
            genero = gen;
        }


};

#endif
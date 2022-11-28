
#ifndef TRABAJADOR_H
#define TRABAJADOR_H

using namespace std;
#include <string>
#include "Miembro.h"

class Trabajador : public Miembro {

    protected:
        float salario;
        string oficina;
    
    public:
        //Constructores
        Trabajador() : Miembro() {
            salario = 0;
            oficina = "";
        }

        Trabajador(float _salario, string _oficina, string _id, string _nombre, int _edad, string _genero) :
        Miembro(_id, _nombre, _edad, _genero) {
            salario = _salario;
            oficina = _oficina;
        }

        //Getters
        float getSalario() {
            return salario;
        }

        string getOficina() {
            return oficina;
        }

        //Setters
        void setSalario(float _salario) {
            salario = _salario;
        }

        void setOficina(string _oficina) {
            oficina = _oficina;
        }

        // Métodos

        //Extensión de la lógica del método virtual e Miembro
        void imprimeDatos() {

            cout << "---------- TRABAJADOR ----------" << endl;
            // Lógica del método en la clase padre
            Miembro::imprimeDatos();

            // Lógica local
            cout << "Salario: $" << salario << endl;
            cout << "Oficina: " << oficina << endl;

        }

};

#endif
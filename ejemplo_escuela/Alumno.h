#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;
#include <string>
#include <vector>
#include "Miembro.h"
#include "Grupo.h"
#include "utils.h"

class Alumno : public Miembro {

    private:
        int beca;
        vector<int> calificaciones;
        vector<Grupo> grupos;
    
    public:
        // Constructores
        Alumno() : Miembro() {
            beca = 0;
        }

        Alumno(int bec, string idx, string nom, int ed, string gen) : Miembro(idx, nom, ed, gen) {
            beca = bec;
        }

        //Getters
        int getBeca() {
            return beca;
        }

        vector<int> getCalificaciones() {
            return calificaciones;
        }

        vector<Grupo> getGrupos() {
            return grupos;
        }

        //Setters
        void setBeca(int bec) {
            beca = bec;
        }

        //Métodos
        void agregarCalificacion(int cal) {
            calificaciones.push_back(cal);
        }

        void agregarGrupo(Grupo grupo) {
            grupos.push_back(grupo);
        }

        /*
        Override del método virtual previamente declarado en la clase Miembro. Es 
        posible extender la funcionalidad del método padre en lugar de sobreescribirlo
        por completo.
        */
        void imprimeDatos() {

            string cals = vectorToString(calificaciones);

            cout << "-------- ALUMNO --------" << endl;
            
            //Llamar la lógica del método padres
            Miembro::imprimeDatos();

            //Añadir lógica local
            cout << "Calificaciones: ";

            if(cals == ""){
                cout << "N/D";
            }
            else{
                cout << cals;
            }

            cout << endl;
        }

};

#endif
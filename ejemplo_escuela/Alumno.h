#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;
#include <string>
#include <vector>
#include "Miembro.h"
#include "Materia.h"

class Alumno : public Miembro {

    private:
        int beca;
        vector<int> calificaciones;
        vector<Materia> materias;
    
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

        vector<Materia> getMaterias() {
            return materias;
        }

        //Setters
        void setBeca(int bec) {
            beca = bec;
        }

        //Métodos
        void agregarCalificacion(int cal) {
            calificaciones.push_back(cal);
        }

        void agregarMateria(Materia materia) {
            materias.push_back(materia);
        }

};

#endif
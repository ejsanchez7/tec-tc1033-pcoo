#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <vector>
#include "Materia.h"

using namespace std;

/*
Cuando hay relaciones circulares: Alumno es incluido en Grupo y Grupo
es incluido en Alumno. Se tiene eliminar la inclusión del archivo en
uno de ellos (en este caso fue en este archivo) y crear una clase 
temporal de la clase a incluir (Alumno). Esto permitirá que el compilador
pueda asignar espacio en memoria a esta clase aunque después se modifique.

La consecuencia es que no se podrán usar objetos de esta clase Alumno en Grupo,
sino que tendrán que ser apuntadores a espacios de memoria que almacenarán
objetos de tipo Alumno.
*/
class Alumno;

class Grupo {

    private:
        // Esto debera cambiar a objeto de tipo Profesor
        string profesor;
        string salon;
        Materia materia;
        vector<Alumno*> alumnos;

    public:
        // Constructores
        Grupo() {
            profesor = "N/D";
            salon = "N/D";
        }
        //Cambiar profesor de "string" a "Profesor"
        Grupo(string _profesor, Materia _materia) {
            profesor = _profesor;
            materia = _materia;
        }

        // Getters
        string getProfesor() {
            return profesor;
        }

        string getSalon() {
            return salon;
        }

        Materia getMateria() {
            return materia;
        }

        vector<Alumno*> getAlumnos() {
            return alumnos;
        }

        // setters
        //cambiar el "string" por "Profesor"
        void setProfesor(string _profesor) {
            profesor = _profesor;
        }

        void setSalon(string _salon) {
            salon = _salon;
        }

        void setMateria(Materia _materia) {
            materia = _materia;
        }

        // Métodos
        void agregarAlumno(Alumno* alumno) {
            alumnos.push_back(alumno);
        }

};

#endif
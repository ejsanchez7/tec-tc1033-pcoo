#include <iostream>
using namespace std;

#include "Campus.h"
#include "Trabajador.h"
#include "Materia.h"
#include "Grupo.h"
#include "Alumno.h"

int main() {

    //Crear un campus
    Campus universidad;

    /*
    Añadir integrantes
    El método "agregarIntegrante" recibe un apuntador a un objeto de tipo "Miembro", esto incluye
    a cualquiera de las clases hijas de "Miembro".
    Para crear un apuntador a un objeto se puede usar el operador "new" al momento de crearlo con
    el constructor correspondiente.
    */
    universidad.agregarIntegrante(new Alumno(90, "A00888867", "Erik Sánchez", 18, "masculino"));
    universidad.agregarIntegrante(new Alumno(50, "A01234567", "Juan Camaney", 35, "masculino"));
    universidad.agregarIntegrante(new Trabajador(5000, "2310", "L001234567", "Freddie Mercury", 40, "masculino"));

    //Imprimir los datos
    universidad.mostrarIntegrantes();

    //Agregar grupo a alumno
    Materia mat("Programacion Orientada a Objetos");
    /*
    dynamic_cast se usa para transformar el apuntador de "Miembro" a "Alumno" ya que el vector
    integrantes fue declarado para almacenar objetos de tipo "Miembro"
    */
    Alumno* alum = dynamic_cast<Alumno*>(universidad.getIntegrantes()[0]);
    // Se usa "->" porque es un apuntador 
    alum->agregarGrupo(Grupo("Benjamin Valdes", mat));
    // Mostrar el grupo agregado
    Grupo grup = alum->getGrupos()[0];
    cout << grup.getMateria().getNombre() <<endl;

    return 0;
};
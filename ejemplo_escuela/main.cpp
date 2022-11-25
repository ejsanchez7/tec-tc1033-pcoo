#include <iostream>
using namespace std;

#include "Campus.h"
#include "Alumno.h"

int main() {

    //Crear un campus
    Campus universidad;

    //Añadir integrantes
    universidad.agregarIntegrante(Alumno(90, "A00888867", "Erik Sánchez", 18, "masculino"));
    universidad.agregarIntegrante(Alumno(50, "A01234567", "Juan Camaney", 35, "masculino"));

    universidad.mostrarIntegrantes();

    return 0;
};
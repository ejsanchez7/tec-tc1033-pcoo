#include <iostream>
using namespace std;

#include "Arbol.h"

int main() {

    Arbol encino;
    Arbol ficus(3, 2);
    ficus.setEspecie("Ficus");
    //encino.especie = "Encino";
    //encino.setEspecie("Encino");
    //encino.edad = 30;
    //encino.setEdad(30);
    //encino.tam = 1.5;
    //encino.setTam(1.5);

    encino.imprimeDatos();
    cout << "----------------" << endl;
    ficus.imprimeDatos();

    return 0;
}
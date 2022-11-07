#include <iostream>
using namespace std;

#include "Arbol.h"

int main() {

    Arbol encino;
    //encino.especie = "Encino";
    encino.setEspecie("Encino");
    //encino.edad = 30;
    //encino.tam = 1.5;

    cout <<"Especie: " << encino.getEspecie() << endl;

    return 0;
}
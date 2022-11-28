#include <iostream>
using namespace std;

#include "Circulo.h"
#include "Rectangulo.h"
#include "Dibujo.h"

int main() {

    // Crear figuras (objetos)
    Circulo c1(23, 5, 0, "#FF0000", 5);
    Circulo c2(78, 45, 0, "#00FF00", 10);
    Rectangulo r1(0, 0, 90, "#0000FF", 7, 12);
    Rectangulo r2(0, 20, 10, "#0500FF", 34, 10);

    // Agregarlos al dibujo
    Dibujo dib;
    dib.agregarFigura(&c1);
    dib.agregarFigura(&c2);
    dib.agregarFigura(&r1);
    dib.agregarFigura(&r2);

    dib.dibujar();


    return 0;
}
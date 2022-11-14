#include <iostream>
using namespace std;

//#include "Circulo.h"
//#include "Cilindro.h"
#include "Cilindro2.h"

int main() {

    float radio;
    float altura;

    cout << "Escribe el radio del círculo: ";
    cin >> radio;

    Circulo circ(radio);

    cout << "El área del círculo es: " << circ.calcularArea() << endl;

    cout << "Escribe el radio del cilindro: ";
    cin >> radio;
    cout << "Escribe la altura del cilindro: ";
    cin >> altura;

    Cilindro cil(radio, altura);
    cout << "El volúmen del cilindro es: " << cil.calcularVolumen() << endl;

    return 0;
}
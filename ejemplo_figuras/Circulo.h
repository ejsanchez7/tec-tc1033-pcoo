#ifndef CIRCULO_H
#define CIRCULO_H

using namespace std;
#include <iostream>
#include <math.h>

#include "Figura.h"

class Circulo : public Figura {

    private:
        float radio;
    public:
        // Constructores
        Circulo(float _posX, float _posY, float _angulo, string _color, float _radio) : 
        Figura(_posX, _posY, _angulo, _color) {
            radio = _radio;
        }

        // Getters
        float getRadio() {
            return radio;
        }
        // Setters
        void setRadio(float _radio) {
            radio = _radio;
        }

        // Métodos
        float calcularArea() {
            return (M_PI * radio * radio);
        }

        float calcularPerimetro() {
            return (M_PI * 2 * radio);
        }

        void dibujar() {
            cout << "Dibujando círculo" << endl;
        }

};

#endif
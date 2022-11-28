#ifndef RECTANGULO_H
#define RECTANGULO_H

using namespace std;
#include <iostream>
#include <math.h>

#include "Figura.h"

class Rectangulo : public Figura {

    private:
        float base;
        float altura;
    public:
        // Constructores
        Rectangulo(float _posX, float _posY, float _angulo, string _color, float _base, float _altura) : 
        Figura(_posX, _posY, _angulo, _color) {
            base = _base;
            altura = _altura;
        }

        // Getters
        float getBase() {
            return base;
        }
        float getAltura() {
            return altura;
        }
        // Setters
        void setBase(float _base) {
            base = _base;
        }
        void setAltura(float _altura) {
            altura = _altura;
        }

        // Métodos
        float calcularArea() {
            return (base * altura);
        }

        float calcularPerimetro() {
            return (2 * base + 2 * altura);
        }

        void dibujar() {
            cout << "Dibujando rectángulo" << endl;
        }

};

#endif
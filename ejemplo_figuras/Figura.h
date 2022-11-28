#ifndef FIGURA_H
#define FIGURA_H

using namespace std;
#include <iostream>
#include <string>

class Figura {

    protected:
        float posX;
        float posY;
        float angulo;
        string color;
    public:
        //Constructores
        Figura(float _posX, float _posY, float _angulo, string _color) {
            posX = _posX;
            posY = _posY;
            angulo = _angulo;
            color = _color;
        }

        //Getters
        float getPosX() {
            return posX;
        }

        float getPosY() {
            return posY;
        }

        float getAngulo() {
            return angulo;
        }

        string getColor() {
            return color;
        }

        //Setters
        void setPosX(float _posX) {
            posX = _posX;
        }

        void setPosY(float _posY) {
            posY = _posY;
        }

        void setAngulo(float _angulo) {
            angulo = _angulo;
        }

        void setColor(string _color) {
            color = _color;
        }

        // Métodos virtuales (abstractos)
        virtual float calcularArea() = 0;
        virtual float calcularPerimetro() = 0;
        virtual void dibujar() {
            cout << "Dibujando Figura";
        }

};

#endif
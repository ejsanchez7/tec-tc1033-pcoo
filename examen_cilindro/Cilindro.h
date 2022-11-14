#include "Circulo.h"

class Cilindro {

    private:
        Circulo base;
        float altura;

    public:
        //Constructores
        Cilindro() {
            altura = 1;
        }

        Cilindro(Circulo b, float a) {
            base = b;
            altura = a;
        }

        //Getters
        Circulo getBase() {
            return base;
        }

        float getAltura() {
            return altura;
        }

        //Setters
        void setCirculo(Circulo b) {
            base = b;
        }

        void setAltura(float a){
            altura = a;
        }
        //Métodos cumunes
        float calcularVolumen() {
            return base.calcularArea() * altura;
        }
};
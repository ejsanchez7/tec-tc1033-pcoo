#include "Circulo.h"

class Cilindro {

    private:
        float radio;
        float altura;
        //Circulo base;

    public:
        //Constructores
        Cilindro() {
            altura = 1;
            radio = 1;
            //base = Circulo(radio);
        }

        Cilindro(float r, float a) {
            radio = r;
            altura = a;
            //base = Circulo(radio);
        }

        //Getters
        float getRadio() {
            return radio;
        }

        float getAltura() {
            return altura;
        }

        //Setters
        void setRadio(float r) {
            radio = r;
        }

        void setAltura(float a){
            altura = a;
        }
        //Métodos cumunes
        float calcularVolumen() {
            Circulo circ = Circulo(radio);
            return circ.calcularArea() * altura;
        }
};
#include <math.h>

class Circulo {

    private:
        float radio;

    public:
        //Constructores
        Circulo() {
            radio = 1;
        }

        Circulo(float r) {
            radio = r;
        }

        //Getters
        float getRadio() {
            return radio;
        }

        //Setters
        void setRadio(float r) {
            radio = r;
        }

        //Métodos comunes
        float calcularArea() {
            return M_PI * radio * radio;
        }
};
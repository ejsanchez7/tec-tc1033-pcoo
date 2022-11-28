#ifndef DIBUJO_H
#define DIBUJO_H

using namespace std;
#include <iostream>
#include <vector>

#include "Figura.h"

class Dibujo {

    private:
        vector<Figura*> figuras;
    public:
        // Constructores
        Dibujo() {
            // Figuras ya se inicializó a un vector vacío
        }
        // Getters
        vector<Figura*> getFiguras() {
            return figuras;
        }

        // Setters
        
        //Métodos
        void agregarFigura(Figura* fig) {
            figuras.push_back(fig);
        }

        void dibujar() {

            for(int i = 0; i < figuras.size(); i++) {
                figuras[i]->dibujar();
            }

        }

};

#endif
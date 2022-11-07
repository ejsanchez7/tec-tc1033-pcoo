#include <string>

class Arbol {
    private:
        string especie;
        int edad;
        float tam; // Tamaño en metros
    public:
        //Getters
        string getEspecie() {
            return especie;
        }
        int getEdad() {
            return edad;
        }
        float getTam() {
            return tam;
        }
        //setters
        void setEspecie(string esp) {
            especie = esp;
        }
        void setEdad(int ed) {
            edad = ed;
        }
        void setTam(float tamanio){
            tam = tamanio;
        }
};
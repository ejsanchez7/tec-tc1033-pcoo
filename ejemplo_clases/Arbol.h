#include <string>

class Arbol {

    private:
        string especie;
        int edad;
        float tam; // Tamaño en metros
        float tam_cm;

    public:
        //Constructor por omisión
        Arbol() {
            especie = "Encino";
            edad = 1;
            tam = 5;
        }

        //Constructor con parámetros
        Arbol(int ed, float tamanio) {
            edad = ed;
            tam = tamanio;
            tam_cm = tamanio * 100;
        }

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
        //Métodos de la clase
        void imprimeDatos() {
            cout << "Especie: " << especie << endl;
            cout << "Edad: " << edad << endl;
            cout << "Tamaño: " << tam << endl;
        }
};
#ifndef UTILS_H
#define UTILS_H

using namespace std;
#include <string>
#include <vector>

//Convierte un vector de enteros a un string separado por comas
string vectorToString(vector<int> datos) {

    string resultado = "";

    for(int i = 0; i < datos.size(); i++) {
        resultado += to_string(datos[i]) + ", ";
    }

    return resultado;

}

#endif
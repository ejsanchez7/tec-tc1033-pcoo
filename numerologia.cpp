#include <iostream>
using namespace std;

int sumar_digitos(int num){

    int digito = num % 10;
    int resto = (num - digito) / 10;
    int suma = digito;

    while(resto > 0){
        digito = resto % 10;
        resto = (resto - digito) / 10;
        suma = suma + digito;
    }

    return suma;

}

int calcular_numero_suerte(int dia, int mes, int anio){

    int numero_suerte = sumar_digitos(dia) + sumar_digitos(mes) + sumar_digitos(anio);

    while(numero_suerte > 9){
        numero_suerte = sumar_digitos(numero_suerte);
    }

    return numero_suerte;

}

int main(){

    cout << "Tu número de la suerte es: " << calcular_numero_suerte(15, 10, 2004) << endl;

    return 0;
}
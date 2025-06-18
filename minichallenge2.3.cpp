/*Dia 10 - Palíndromo
Escribir un programa que determine si una cadena de caracteres ingresada
por el usuario es un palíndromo ¡Pero hazlo en C++! :)*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, invertido = "";
    cout << "Escribe una palabra: ";
    cin >> texto;

    for (int i = texto.length() - 1; i >= 0; i--) {
        invertido += texto[i];
    }

    if (texto == invertido) {
        cout << "Es un palíndromo" << endl;
    } else {
        cout << "No es un palíndromo" << endl;
    }

    return 0;
}

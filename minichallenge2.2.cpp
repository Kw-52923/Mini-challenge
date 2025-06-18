/*Dia 09 - Ordenamiento de un Array
Escribir un programa que ordene un array de enteros utilizando ¡Pero
hazlo en C++! :)*/
#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    cout << "Escribe 5 números:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    // Ordenar con burbuja
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Array ordenado:\n";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}

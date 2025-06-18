/*Dia 8 - Suma de numeros en C++
Escribir un programa que pida al usuario dos números y los sume. ¡Pero
esta vez hazlo en C++! :)*/
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

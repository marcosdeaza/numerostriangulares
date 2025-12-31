//Numeros triangulares Marcos de Aza 28/12/2025
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un numero entero: ";
    cin >> numero;

    int suma = 0;
    int contador = 1;

    // Sumamos 1 + 2 + 3... mientras no nos pasemos
    while (suma < numero) {
        suma = suma + contador;
        contador++;
    }

    if (suma == numero) {
        cout << "ES un numero triangular." << endl;
    } else {
        cout << "NO es un numero triangular." << endl;
    }

    return 0;
}
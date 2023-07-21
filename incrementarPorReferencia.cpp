#include <iostream>
using namespace std;

// Función que recibe un parámetro por referencia
void incrementarPorReferencia(int& num) {
    num++;
}

int main() {
    int numero = 5;
    cout << "Valor inicial de numero: " << numero << endl;

    incrementarPorReferencia(numero);

    cout << "Valor despues de incrementarPorReferencia: " << numero << endl;
    return 0;
}

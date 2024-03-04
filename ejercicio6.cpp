#include <iostream>
using namespace std;
// Función para calcular el factorial de un número
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int n;
    double e = 0.0;
    // Solicitar al usuario el número de términos
    cout << "Ingrese el numero de terminos para calcular el valor aproximado de e: ";
    cin >> n;
    // Calcular la suma de los primeros n términos
    for (int i = 0; i < n; ++i) {
        e += 1.0 / factorial(i);
    }
    // Imprimir el resultado
    cout << "e es aproximadamente: " << e << endl;

    return 0;
}

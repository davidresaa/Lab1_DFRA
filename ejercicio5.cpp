#include <iostream>
using namespace std;

int main() {
    int tamaño;
    bool bandera = true;

    // Solicitar al usuario el tamaño del patrón
    cout << "Ingrese un numero impar para determinar el tamaño del patron: ";
    cin >> tamaño;

    // Verificar si el tamaño ingresado es impar
    while (bandera == true){
         if (tamaño % 2 == 0) {
            cout << "El numero ingresado no es impar. Por favor, ingrese un numero impar: ";
            cin >> tamaño;
        }
        else {
            bandera = false;
            cout << "Ejecutando programa........" << endl;
        }
    }
    // Imprimir el patrón centrado
    for (int i = 1; i <= tamaño; i += 2) {
        int espacios = (tamaño - i) / 2;
        for (int j = 0; j < espacios; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = tamaño - 2; i >= 1; i -= 2) {
        int espacios = (tamaño - i) / 2;
        for (int j = 0; j < espacios; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

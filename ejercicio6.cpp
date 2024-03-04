#include <iostream>

using namespace std;

int main() {
  int dia, mes;
  bool esValida = true;

  // Leer el mes y el día
  cout << "Introduzca el mes (1-12): ";
  cin >> mes;
  cout << "Introduzca el día (1-31): ";
  cin >> dia;

  // Validar el mes
  if (mes < 1 || mes > 12) {
    esValida = false;
    cout << mes << " es un mes inválido." << endl;
  }

  // Validar el día
  if (esValida) {
    switch (mes) {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (dia < 1 || dia > 31) {
          esValida = false;
        }
        break;
      case 4: case 6: case 9: case 11:
        if (dia < 1 || dia > 30) {
          esValida = false;
        }
        break;
      case 2:
        if (dia < 1 || dia > 28) {
          esValida = false;
        } else if (dia == 29) {
          // Comprobar si el año es bisiesto
          int anio;
          cout << "Introduzca el año: ";
          cin >> anio;
          if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
            cout << "29/2 es válida en bisiesto." << endl;
          } else {
            cout << "29/2 es una fecha inválida." << endl;
          }
        }
        break;
    }
  }

  // Mostrar el mensaje final
  if (esValida) {
    cout << dia << "/" << mes << " es una fecha válida." << endl;
  } else {
    cout << dia << "/" << mes << " es una fecha inválida." << endl;
  }

  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int dia, mes;
  bool esValida = true;

  // Vectores con los meses
  vector<int> meses31 = {1, 3, 5, 7, 8, 10, 12};
  vector<int> meses30 = {4, 6, 9, 11};

  // Leer el mes y el día
  cout << "Introduzca el mes (1-12): ";
  cin >> mes;

  // Validar el mes
  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Introduzca el día (1-31): ";
        cin >> dia;
        if (dia < 1 || dia > 31) {
         cout << dia << "/" << mes << " es una fecha invalida." << endl;
        }
        else {
          cout << dia << "/" << mes << " es una fecha valida." << endl;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Introduzca el día (1-31): ";
        cin >> dia;
        if (dia < 1 || dia > 30) {
          cout << dia << "/" << mes << " es una fecha invalida." << endl;
        }
        else {
          cout << dia << "/" << mes << " es una fecha valida." << endl;
        }
        break;
    case 2:
        cout << "Introduzca el día (1-31): ";
        cin >> dia;
        if (dia < 1 || dia > 28) {
          cout << dia << "/" << mes << " es una fecha invalida." << endl;
        }
        else if (dia == 29) {
        cout << " Posiblemente año bisiesto" << endl;
        }

        else {
        cout << dia << "/" << mes << " es una fecha valida." << endl;
        }
        break;
    default:
      cout << mes << " es un mes invalido." << endl;
      break;
  }
  return 0;
}

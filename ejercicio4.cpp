#include <iostream>
#include <string>
using namespace std;

int main() {

    int horaInicial, duracion;
    bool horaValida = true;
    int minutosInicial = 0, minutosFinal = 0, horasInicial = 0, horasFinal = 0;
    string hora, minutos;
    // Leer la hora inicial

    while(horaValida){
        cout << "Introduzca la hora inicial (formato 24 horas HHMM): ";
        cin >> horaInicial;

        // Extraer las horas y minutos de la hora inicial
        minutosInicial = horaInicial % 100; //modulo
        horasInicial = horaInicial / 100; // divisisón entera
        if (horaInicial ==minutosInicial){
          cout << "Formato incorrecto" << endl;
          continue;
        }
        else {
            if (horaInicial < 0 || horaInicial > 2359) {
                cout << horaInicial << " es un tiempo inválido." << endl;
            }
            else {

                while(horaValida){
                    cout << "Introduzca el tiempo de duracion duración (formato 24 horas HMM): ";
                    cin >> duracion;
                    minutosFinal = duracion % 100;
                    horasFinal = duracion / 100;
                    if (duracion == minutosFinal){
                        cout << "Formato incorrecto" << endl;
                    }
                    else {
                        if (duracion < 0 || duracion > 2359) {
                            cout << duracion << " es un tiempo inválido." << endl;
                            continue;
                        }
                        else {
                           horaValida = false;
                        }

                    }
                }
        }
    }

  // Sumar las horas y minutos por separado
    minutosFinal = minutosInicial + minutosFinal;
    horasFinal = horasInicial + horasFinal;
    if (horasFinal >23){
      horasFinal -=24;
    }

  // Si los minutos son mayores o iguales a 60, aumentar las horas
    if (minutosFinal >= 60) {
     minutosFinal -= 60;
     horasFinal++;
    }
    // Calcular la hora final

    hora = to_string(horasFinal);
    minutos = to_string(minutosFinal);

    if (horasFinal >=0 && horasFinal <= 9){
      hora = "0" + to_string(horasFinal);
    }
    if (minutosFinal >=0 && minutosFinal <= 9){
      minutos = "0" + to_string(minutosFinal);
    }
    cout << "La hora es " << hora << minutos << endl;
 }
    return 0;
}

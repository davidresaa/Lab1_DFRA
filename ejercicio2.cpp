#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> billetes = {50000, 20000, 10000, 5000, 2000, 1000};
  vector<int> monedas = {500, 200, 100, 50};

  int cantidad;
  cout << "Ingrese la cantidad de dinero: ";
  cin >> cantidad;

  for (int i = 0; i < billetes.size(); i++) {
    int num_billetes = cantidad / billetes[i];
    cantidad -= num_billetes * billetes[i];
    cout << billetes[i] << " : " << num_billetes << endl;
  }

  for (int i = 0; i < monedas.size(); i++) {
    int num_monedas = cantidad / monedas[i];
    cantidad -= num_monedas * monedas[i];
    cout << monedas[i] << " : " << num_monedas << endl;
  }

  if (cantidad > 0) {
    cout << "Faltante: " << cantidad << endl;
  }

  return 0;
}

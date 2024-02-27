#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char letra;
  cout << "Ingrese un caracter: ";
  cin >> letra;
  letra = tolower(letra);

//PRIMERO PREGUNTO SI ES LETRA
  if (isalpha(letra)) {
    //LUEGO REVISO SI ES UNA VOCAL
      if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      cout << letra << " es una vocal" << endl;
    } else {
          //SI ES LETRA, PERO NO VOCAL ES PORQUE ES UNA CONSONANTE
      cout << letra << " es una consonante" << endl;
    }
  } else {
    cout << "No es una letra" << endl;
  }

  return 0;
}

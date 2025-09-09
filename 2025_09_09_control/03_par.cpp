// Dado un número entero, decir si el número
// es par o impar.
// $ Introduce un numero entero: 7
// $ Es un numero impar
//
// $ Introduce un numero entero: 10
// $ Es un numero par
#include <iostream>
using namespace std;

int main () {
  int num;
  cout << "Introduce un numero entero: ";
  cin >> num;
  int resto = num % 2;
  if (resto == 0) {
    cout << "Es un numero par" << endl;
  } else {
    cout << "Es un numero impar" << endl;
  }
  if (resto) {
    cout << "Es un numero impar" << endl;
  } else {
    cout << "Es un numero par" << endl;
  }

}
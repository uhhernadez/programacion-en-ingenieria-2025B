// Programa que me diga si dada una edad,
// la persona es mayor o menor de edad.
// tomando como marco de referencia México.
// $ Dime tu edad: 40
// $ Eres mayor de edad
// 
// $ Dime tu edad: 17
// $ Eres menor de edad
#include <iostream>
using namespace std;
int main () {
  int edad;
  cout << "Dime tu edad: ";
  cin >> edad;
  if (edad >= 18) {
    cout << "Eres mayor de edad" << endl;
  } else {
    cout << "Eres menor de edad" << endl;
  }
}
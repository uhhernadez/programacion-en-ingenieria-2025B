#include <iostream>
using namespace std;

int main () {
  int num;
  int suma = 0;
  cout << "Dame el numero a sumar: ";
  cin >> num;
  while (num >= 0) {
    suma = suma + num;
    cout << "Dame el numero a sumar: ";
    cin >> num;
  }
  cout << "La suma es: " << suma << endl;
}
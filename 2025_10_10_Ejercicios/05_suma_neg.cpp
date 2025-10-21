#include <iostream>
using namespace std;

int main (){
  int num;
  int suma = 0;
  while (true) {
    cout << "Dame el numero: ";
    cin >> num;
    if (num >= 0) {
      suma = suma + num;
    } else {
      break;
    }
  }
  cout << "La suma es: " << suma;
  return 0;
}
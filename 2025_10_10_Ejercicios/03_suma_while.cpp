#include <iostream>
using namespace std;

int main () {
  int N = 100;
  int suma = 0;
  int k = 2;

  while ( k <= N) {
    suma += k;
    k += 2;
  }
  cout << "La suma total es: " << suma << endl;
}
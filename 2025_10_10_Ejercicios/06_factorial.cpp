#include <iostream>
using namespace std;

int main () {
  int x;
  unsigned long int factorial = 1;
  cout << "Dame el numero factorial: ";
  cin >> x;
  for (int k = 1 ; k <= x; k++) {
//    factorial = factorial * k;
    factorial *= k;
  }
  cout << "El factorial es: "<< factorial << endl;
  return 0;
}
#include <iostream>
using namespace std;

int main () {
  float x, y;

  cout << "De el valor de 'x' : ";
  cin >> x;
  y = 3 * x * x - 2 * x + 9;
  cout << "y = " << y << endl;

  return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  float x, y, r;

  cout << "Dame el valor de x: ";
  cin >> x;
  cout << "Dame el valor de y: ";
  cin >> y;
  
  r = sqrt(pow(x,2)+ pow(y,2));
  r = sqrt(x*x + y*y);
  cout << "El resultado es: " << r << endl;
  return 0;
}
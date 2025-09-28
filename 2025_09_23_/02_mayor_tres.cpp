#include <iostream>
using namespace std;

int main () {
  float a, b, c;

  cout << "Dame el valor de a: ";
  cin >> a;

  cout << "Dame el valor de b: ";
  cin >> b;

  cout << "Dame el valor de c: ";
  cin >> c;
  
  if ( a > b ) {
    if ( a > c ) {
      cout << "El mayor es a: " << a << endl;
    } else {
      cout << "El mayor es c: " << c << endl;
    }
  } else {
    if ( b > c ) {
      cout << "El mayor es b: " << b << endl;
    } else {
      cout << "El mayor es c: " << c << endl;
    }
  }

  return 0;
}
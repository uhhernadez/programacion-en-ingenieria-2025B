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
  //   true AND true
  if ( a > b && a > c) {
    cout << "El mayor es a: " << a << endl;
  } else if (b > a && b > c) {
    cout << "El mayor es b: " << b << endl;
  } else if (c > a && c > b) {
    cout << "El mayor es c: " << c << endl;
  } 
      return 0;
}
#include <iostream>
using namespace std;

int main () {
  float a, b, c;


  if  (a > b && a > c) {
    if (b > c) {
      cout << c << " " << b << " " << a << endl;
    } else {
      cout << b << " " << c << " " << a << endl;
    }
  }

  if (b > a && b > c ) {
    if (a > c) {
      cout << c << " " << a << " " << b << endl;
    } else {
      cout << a << " " << c << " " << b << endl;
    }
  }

  if (c > a && c > b) {
    if (a > b) {
      cout << b << " " << a << " " << c << endl;
    } else {
      cout << a << " " << b << " " << c << endl;
    }

  }
  return 0; 
}
#include <iostream>
using namespace std;

int main () {
  float a , b;
  cout << "Dame el numero a: ";
  cin >> a;

  cout << "Dame el numero b: ";
  cin >> b;

  if (a > b) {
    cout << "El mayor es a : " << a << endl; 
  } else {
    cout << "El mayor es b : " << b << endl;
  }


  return 0;
}
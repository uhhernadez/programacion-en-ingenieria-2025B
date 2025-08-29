#include <iostream>
using namespace std;

int main () {
  float F;
  float C;
  cout << "Grados Fahrenheit : ";
  cin >> F;
  C = ( F - 32.0 ) / 1.8;
  cout << "Centigrados : " << C << endl;
  return 0;
}
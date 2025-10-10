#include <iostream>
using namespace std;

int main () {
  int n;
  cout << "Dime el numero de columnas: ";
  cin >> n;

  for (int i = 0; i < n ; i++) {
    if (i % 2) {
      cout << '+';
    } else {
      cout << '*';
    }
  }
  cout << endl;
  return 0;
}
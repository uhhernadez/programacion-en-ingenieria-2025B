#include <iostream>
using namespace std;

int main () {
  int n;
  char signo = '*';
  cout << "n = ";
  cin >> n;
  
  // Renglones
  for (int i = 1; i <= n; i++) {
    // Columnas
    for (int j = 0; j < i; j++) {
      cout << signo;
    }
    cout << endl;
  }
  return 0;
}
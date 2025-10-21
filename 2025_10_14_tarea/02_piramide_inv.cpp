#include <iostream>
using namespace std;

int main () {
  int n;
  char signo = '#';
  cout << "n = ";
  cin >> n;

  // Renglones
  for (int i = n; i > 0; i--) {
    //cout << i;
    // Columnas
    for (int j = 0; j < i; j++) {
      cout << signo;
    }
    cout << endl;
  }


}
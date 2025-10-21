#include <iostream>
using namespace std;

int main () {
  int n ;
  char espacio = ' ';
  char signo = '+';
  cout << " n = ";
  cin >> n;
  // Renglones
  for (int i  = 0; i < n; i++) {
    //cout << i << " " << n-i << endl;
    for (int j = 0; j < n; j++) {
      if (j < i) {
        cout << espacio;
      } else {
        cout << signo;
      }
    }
    cout << endl; 
  }

  return 0;
}
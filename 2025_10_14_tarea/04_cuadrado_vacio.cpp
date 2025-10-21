#include <iostream>
using namespace std;

int main () {
  int n;
  char espacio = ' ';
  char signo = '#';
  cout << "n = ";
  cin >> n ;

  for (int i = 1; i <= n; i++) {
    if (i == 1 || i == n) {
      for (int j = 1; j <= n ; j++) {
        cout << signo;
      }
    } else {
      for (int j = 1; j <= n; j++)
        if (j==1|| j==n) {
          cout << signo; 
        } else {
          cout << espacio;
        }
    }
    cout << endl;
  }

  return 0;
}
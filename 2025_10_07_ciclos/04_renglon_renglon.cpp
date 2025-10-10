#include <iostream>
using namespace std;

int main () {
  int n, i = 0;

  cout << "Dame el valor de la repeticion: ";
  cin >>n;

  while (i < n) {
    if( i % 2 ) {
      cout << "+*+*+" << endl;
    } else {
      cout << "*+*+*" << endl;
    }
    i++;
  }  
}
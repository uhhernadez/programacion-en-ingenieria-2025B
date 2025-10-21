#include <iostream>
using namespace std;

int main () {
  int N = 100;
  int suma = 0;

  for (int i = 1 ; i <= N; i++) {
    if ( i % 2 == 0) {
      suma = suma + i;
    }
  }
  cout <<"La suma total es: "<< suma << endl;
}
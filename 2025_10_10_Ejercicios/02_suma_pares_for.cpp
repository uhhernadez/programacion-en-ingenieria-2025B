#include <iostream>
using namespace std;

int main () {
  int N = 100;
  int suma = 0;

  for (int j = 2; j <= 100; j+=2) {
    suma = suma + j;
  }
  cout <<"La suma total es: "<< suma  << endl;
  return 0;
}



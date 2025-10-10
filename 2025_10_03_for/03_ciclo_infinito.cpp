#include <iostream>
using namespace std;

int main () {
  /*
  for (;;) {
    cout << "Esto nunca termina" << endl;
  }
    */

  for (int j = 0; ; j-=10000) {
    cout << "Este ciclo se ha repetido " << j << " veces "<< endl;
  }
  return 0;
}
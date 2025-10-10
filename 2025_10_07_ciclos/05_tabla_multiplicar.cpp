#include <iostream>
using namespace std;

int main () {
  int num;
  cout << "Tabla: ";
  cin >> num;
  for (int i = 1 ; i <= 10; i++) {
    cout << i << " x " << num << " = " << i * num << endl;
  }

}
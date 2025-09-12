#include <iostream>
using namespace std;

int main () {
  int respuesta = 0;

  cout << "Tienes un problema? " << endl;
  cout << "1 : Si " << endl;
  cout << "0 : No " << endl;
  cin >> respuesta;

  if (respuesta == 0) {
    // No hay problema
    cout << "No te preocupes" << endl;
  } else {
    // Si problema
    cout << "Tiene solucion?" << endl;
    cout << "1 : Si" << endl;
    cout << "0 : No" << endl;
    cin >> respuesta;

    if (respuesta == 1) { // if (respuesta)
      cout << "Solucionando..." << endl;
      cout << "Se soluciono?" << endl;
      cout << "1 : Si" << endl;
      cout << "0 : No" << endl;
      cin >> respuesta; // No importa la respuesta
      cout << "No te preocupes!" << endl;
    } else {
      cout << "No te preocupes" << endl;
    }
  }

  return 0;
}
#include <iostream>
using namespace std;

int main () {
  int control = 1;

  switch (control) {
    case 0 : {
      cout << "Este es el caso cero" << endl;
    }
    break;
    case 1 : {
      cout << "Este es el caso uno" << endl;
    }
    break;
    default : {
      cout << "Caso no cubierto" << endl;
    }
    break;
  }

  return 0;
}
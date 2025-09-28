#include <iostream>
using namespace std;

int main () {
  char operacion;
  float a , b;
  cout << "Dime el valor a ";
  cin >> a;
  cout << "Dime el valor b ";
  cin >> b;

  cout << "Que operacion quieres realizar?" << endl;
  cout << "'+' : Suma " << endl;
  cout << "'-' : Resta " << endl;
  cout << "'*' : Multiplicacion " << endl;
  cout << "'/' : Division " << endl;
  cin >> operacion;

  switch (operacion) {
    case '+': {
      cout << "Suma : " << (a + b) << endl; 
    } break;
    case '-': {
      cout << "Resta : " << (a - b) << endl; 
    } break;
    case '*': {
      cout << "Multiplicacion : " << (a * b) << endl; 
    } break;
    case '/': {
      cout << "Division : " << (a / b) << endl; 
    } break;
    default: {
      cout << "Operacion no soportada '" 
           << operacion << "'" << endl;
    }
    break;
  }


  return 0;  
}
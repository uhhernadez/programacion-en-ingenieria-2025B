#include <iostream>
using namespace std;

void mensaje () {
  cout << "Hola mundo!" << endl;
}

int leerEntero () {
  int numero;
  cout<< "Dame el valor ";
  cin >> numero;
  return numero;
}

int sumaDosVariables(int a, int b) {
  int resultado;
  resultado = a + b;
  return resultado;
}

int main (int argc, char *argv[]) {
  int n, m;
  n = leerEntero();
  m = leerEntero();
  cout << n << " " << m 
        << " la suma es " << sumaDosVariables(m,n) 
        << endl;
  return 0;
}


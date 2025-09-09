/*
Hacer un programa que convierta de
pesos mexicanos a bitcoins
El programa debe de mostrarse como:
¿Cuantos pesos quieres cambias?
100
Con 100.00 MXN le alcanza para: 
XXXX bitcoins
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  float pesos = 0.0;
  const float valor = 2082049;
  cout << "Cuantos pesos quieres cambiar?\n";
  cin >> pesos;
  cout << "Con " << fixed << setprecision(2) << pesos << " le alcanza para:\n";
  cout <<setprecision(10)<< pesos/valor << " bitcoins" << endl; 
  return 0;
}
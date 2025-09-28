#include <iostream>
using namespace std;

int main () {
  float calificacion;

  cout << "Porcentaje";
  cin >> calificacion;
  
  if (calificacion < 60) {
    cout << "Calificacion: F" << endl;
  } else if (calificacion < 70 ) {
    cout << "Calificacion: D" << endl;
  } else if (calificacion < 80 ) {
    cout << "Calificacion: C" << endl;
  } else if (calificacion < 90 ) {
    cout << "Calificacion: B" << endl;
  } else if (calificacion < 100) {
    cout << "Calificacion: A" << endl;
  }
 
  if ( calificacion >= 90 && calificacion <= 100) {
    cout << "Calificacion: A" << endl;
  } else if ( calificacion >= 80 && calificacion < 90) {
    cout << "Calificacion: B" << endl;
  }  


  return 0;
}
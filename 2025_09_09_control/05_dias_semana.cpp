// Escriba un programa que dado un numero
// del 1 al 7, escriba el dia de la semana
// 1 - Lunes
// 2 - Martes
// 3 - Miercoles
// 4 - Jueves
// 5 - Viernes
// 6 - Sabado
// 7 - Domingo
#include <iostream>
using namespace std;
int main () {
  int dia;
  cout << "Dame el numero del dia: ";
  cin >> dia;

  if ( dia == 1 ) {
    cout << "Lunes" << endl;
  } else if ( dia == 2) {
    cout << "Martes" << endl;    
  } else if ( dia == 3) {
    cout << "Miercoles" << endl;
  } else if ( dia == 4) {
    cout << "Jueves" << endl;
  } else if ( dia == 5) {
    cout << "Viernes" << endl;
  } else if ( dia == 6) {
    cout << "Sabado" << endl;
  } else if ( dia == 7) {
    cout << "Domingo" << endl;
  } else {
    cout << "El dia : " << dia << " no es valido" << endl;
  }


}
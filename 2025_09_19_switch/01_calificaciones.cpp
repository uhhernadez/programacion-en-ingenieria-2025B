#include <iostream>
using namespace std;

int main () {
  int calificacion; // {0.0, 0.5, ..., 10}
  cout << "Dime tu califacion" << endl;
  cin >> calificacion;

  switch(calificacion) {
    case 0 : cout << "Que mal!" << endl; break;
    case 1 : cout << "Pues ya!" << endl; break;
    case 2 : cout << "No puede ser!! " << endl; break;
    case 3 : cout << "Pues que le hago!!" << endl; break;
    case 4 : cout << "Ya ni modo" << endl; break;
    case 5 : cout << "Ya valio" << endl; break;
    case 6 : cout << "De pansazo" << endl; break;
    case 7 : cout << "Ya la pase, meeeh" << endl; break;
    case 8 : cout << "Me pude haber esforzado mas" << endl; break;
    case 9 : cout << "Esta joya" << endl; break;
    case 10 : cout << "No lo puedo creer" << endl; break;
    default: cout << "Corrige" <<endl;
  }


  return 0;
}
#include <iostream>
using namespace std;
// Scope - Global
enum Semana {Lunes, Martes, Miercoles, Jueves,
            Viernes, Sabado, Domingo};

enum class Estaciones { Primavera, Verano, Otono, Invierno};
// Variables globales            
int a , b; // Mala práctica de programación

int main () { // Scope - Local
  Semana dia = Miercoles;
  switch(dia) {
    case Lunes: break;
    case Martes: break;
    case Miercoles: break;
    case Jueves: break;
    case Viernes: break;
    case Sabado: break;
    case Domingo: break;
  }
  return 0;
}
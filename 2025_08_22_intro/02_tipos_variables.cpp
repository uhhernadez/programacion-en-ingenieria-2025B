#include <iostream>

int main () {
  // La declaración de las variables
  bool bandera;
  int edad;
  float peso;
  double presion;  

  std::cout << "Cierto o falso?" << std::endl;
  std::cin >> bandera;
  std::cout << "Que edad tienes?" << std::endl;
  std::cin >> edad;
  std::cout << "Cual es tu peso?" << std::endl;
  std::cin >> peso;
  std::cout << "Dame un valor de presion" << std::endl;
  std::cin >> presion;

  std::cout << "Los valores son: " 
            << bandera << " " 
            << edad << " " 
            << peso << " " 
            << presion << std::endl; 
}
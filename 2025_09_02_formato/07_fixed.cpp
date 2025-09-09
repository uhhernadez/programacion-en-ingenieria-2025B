#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  double kiloTortilla = 22.99;
  double millisRecord = 9.58;
  cout << fixed;
  cout << setprecision(0) << kiloTortilla << endl;
  cout << setprecision(0) << millisRecord << endl;
  
  cout << setprecision(1) << kiloTortilla << endl;
  cout << setprecision(1) << millisRecord << endl;
  
  cout << setprecision(2) << kiloTortilla << endl;
  cout << setprecision(2) << millisRecord << endl;
  return 0;
}

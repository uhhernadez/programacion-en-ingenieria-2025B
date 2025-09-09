#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  const double PI = 3.1415926535897932384626433832795028841971693993751;
  cout << setprecision(1) << PI << endl;
  cout << setprecision(2) << PI << endl;
  cout << setprecision(3) << PI << endl;
  cout << setprecision(4) << PI << endl;
  cout << setprecision(5) << PI << endl;
  cout << setprecision(6) << PI << endl;
  return 0;
}
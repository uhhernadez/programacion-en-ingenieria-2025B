#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  cout << setfill('0') << setw(10) << "1" << endl;
  cout << setw(10) << setfill('0') << "ABC" << endl;
  return 0;
}
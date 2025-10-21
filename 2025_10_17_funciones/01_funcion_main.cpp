#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  cout << "Numero de argumentos " << argc << endl;
  if (argc == 2) {
    cout << argv[1] << endl;
  }
  return 10;
}
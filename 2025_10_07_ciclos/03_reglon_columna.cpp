#include <iostream>
using namespace std;

int main () {
  int n ;
  cout << "Dime el numero de repeticiones: ";
  cin >> n ;
  
  for(int j = 0; j < n; j++) {
    for (int i = 0; i < n ; i++) {
      if( i % 2) {
        cout << '+';
      } else {
        cout << '*';
      } 
    }
    cout << endl;
  }

  return 0;
}
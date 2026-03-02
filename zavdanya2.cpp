#include <iostream>
using namespace std;

int main () {
  int n;
  long long factorial = 1;

  cout << "Bвeдiть число : ";
  cin >> n;

  if (n < 0) {
    cout << "Помилка !" << endl;
  } else {
    while(n > 0) {        // або 1 щоб менше крокiв було
      factorial *= n;
      n--;
    }
    cout << "Результат : " << factorial << endl;
  }
  
  return 0;

}

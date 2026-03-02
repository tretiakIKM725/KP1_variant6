#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Введіть 4-значне число : ";
  cin >> number;

  int second = (number / 100) % 10;

  cout << "Друга цифра : ";
  switch (second)
  {
  case 0:
    cout << "нуль" << endl;
    break;
  case 1:
    cout << "один" << endl;
    break;
  case 2:
    cout << "два" << endl;
    break;
  case 3:
    cout << "три" << endl;
    break;
  case 4:
    cout << "чотири" << endl;
    break;
  case 5:
    cout << "п'ять" << endl;
    break;
  case 6:
    cout << "шicть" << endl;
    break;
  case 7:
    cout << "ciм" << endl;
    break;
  case 8:
    cout << "вiciм" << endl;
    break;
  case 9:
    cout << "дев'ять" << endl;
    break;
  default:
    cout << "Помилка !" << endl;
    break;
  }

  return 0;

}

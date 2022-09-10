// Find GDC (greates common deviser) of two number
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number1, number2;

  cout << "Enter two number";
  cin >> number1 >> number2;

  while (number1 != number2)
  {
    if (number1 > number2)
      number1 = number1 - number2;
    else if (number2 > number1)
      number2 = number2 - number1;
  }

  cout << "GDC is " << number2;

  return 0;
}
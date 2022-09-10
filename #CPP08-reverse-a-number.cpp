// Reverse of a number
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number, r, sum = 0, rev = 0;

  cout << "Enter a number: ";
  cin >> number;

  int m = number;
  while (number > 0)
  {
    r = number % 10;
    number = number / 10;
    rev = rev * 10 + r;
  }

  cout << "Reverse number: " << rev;

  return 0;
}
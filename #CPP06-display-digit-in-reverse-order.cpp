// Display a digit in reverse order
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number, rev;

  cout << "Enter a number: ";
  cin >> number;

  while (number > 0)
  {
    rev = number % 10;
    number = number / 10;
    cout << rev << endl;
  }

  return 0;
}
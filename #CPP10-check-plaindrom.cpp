// Check the number is plaindrom or not
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int num, inputNum, r, rev = 0;

  cout << "Enter a number: ";
  cin >> num;

  inputNum = num;

  while (num > 0)
  {
    r = num % 10;
    num = num / 10;
    rev = rev * 10 + r;
  }

  if (rev == inputNum)
    cout << "Plaindrom" << endl;
  else
    cout << "Not a plaindrom" << endl;

  return 0;
}
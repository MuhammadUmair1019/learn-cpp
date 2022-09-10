// Check the number is amstrong or not
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number, rev, sum = 0;

  cout << "Enter a number: ";
  cin >> number;

  int m = number;
  while (number > 0)
  {
    rev = number % 10;
    number = number / 10;
    sum += rev * rev * rev;
  }

  if (sum == m)
    cout << "Amstrong" << endl;
  else
    cout << "Not amstrong " << sum << endl;

  return 0;
}
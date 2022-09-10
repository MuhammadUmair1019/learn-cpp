// Find a perfect number
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number, sum = 0;

  cout << "Enter a number: ";
  cin >> number;

  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
    {
      sum += i;
    }
  }

  if (2 * number == sum)
    cout << "Perfect number";
  else
    cout << "Not a perfect number";

  return 0;
}
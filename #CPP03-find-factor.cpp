// Find factor of a number
// -------------------------------
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number;

  cout << "Enter a number: ";
  cin >> number;

  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
    {
      cout << "Factor of " << number << "=" << i << endl;
    }
  }
  return 0;
}
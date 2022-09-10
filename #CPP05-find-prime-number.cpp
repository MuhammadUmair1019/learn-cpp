// Find a prime number
#include <iostream>
using namespace std;

int main()
{
  // Write C++ code here
  int number, count = 0;

  cout << "Enter a number: ";
  cin >> number;

  for (int i = 1; i <= number; i++) {
    if (number % i == 0)
      count++;
  }
  
  if (count == 2)
    cout << "Prime number";
  else
    cout << "Not a prime number";

  return 0;
}
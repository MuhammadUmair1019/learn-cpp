// Wrtie a program to calculate the average of all elements in an array

#include <iostream>
using namespace std;

int main()
{

  float num[100], sum = 0.0, average;
  int n;

  cout << "Enter the numbers of elements: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << ". Enter the number ";
    cin >> num[i];
    sum += num[i];
  }

  average = sum / n;

  cout << "The average is: " << average;

  return 0;
}
// Binary Serach
#include <iostream>
using namespace std;

int main()
{
  int A[10] = {10, 22, 25, 26, 40, 50, 55, 70, 75, 90};
  int low = 0, high = 9, mid, key;

  cout << "Enter a key: ";
  cin >> key;

  while (low <= high)
  {
    mid = (low + high) / 2;
    if (key == A[mid]) {
      cout << "Key found at " << mid;
      return 0;
    }
    else if (key > A[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }

  cout << "Key not found";
  return 0;
}
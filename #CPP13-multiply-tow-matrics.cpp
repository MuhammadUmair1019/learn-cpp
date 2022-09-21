// Multiply two matrics
#include <iostream>
using namespace std;

int main()
{

  int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

  cout << "Enter rows and columns for first matrix: ";
  cin >> r1 >> c1;

  cout << "Enter rows and columns for second matrix: ";
  cin >> r2 >> c2;

  while (c1 != c2)
  {
    cout << "Error! Column of first matrix not euqal to second." << endl;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
  }

  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {
      cout << "Enter element of a" << i + 1 << j + 1 << ": ";
      cin >> a[i][j];
    }
  }

  for (i = 0; i < r2; i++)
  {
    for (j = 0; j < c2; j++)
    {
      cout << "Enter element of b" << i + 1 << j + 1 << ": ";
      cin >> b[i][j];
    }
  }

  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c2; j++)
    {
      mult[i][j] = 0;
      for (k = 0; k < c1; k++)
      {
        mult[i][j] += a[i][k] * b[i][k];
      }
    }
  }

  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c2; j++)
    {
      cout << " " << mult[i][j];
    }
    cout << endl;
  }

  return 0;
}
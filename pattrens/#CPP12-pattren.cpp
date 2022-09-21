// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
  int count = 1;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << count++ << " ";
    }
    cout << endl;
  }

  return 0;
}

// Pattren -2

// Output
//  *
//  * *
//  * * *
//  * * * *

#include <iostream>
using namespace std;

int main()
{

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i >= j)
      {
        cout << "* ";
      }
    }
    cout << endl;
  }

  return 0;
}

// Pattren -3

// Output
// * * * *
//   * * *
//     * *
//       *

#include <iostream>
using namespace std;

int main()
{

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i > j)
        cout << "  ";
      else
        cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
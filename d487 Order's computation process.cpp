#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    int b = a;

    if (a == 0)
    {
      cout << "0! = 1 = 1\n";
    }
    else
    {
      cout << a << "! = ";

      for (int i = a; i > 0; i--)
      {
        cout << i;

        if (i != a)
          b *= i;

        if (i != 1)
          cout << " * ";
      }

      cout << " = " << b << "\n";
    }
  }
}
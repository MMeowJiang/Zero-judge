#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    if (a == 0)
    {
      break;
    }

    for (int i = 0; i < a; i++)
    {
      for (int j = a - i - 1; j > 0; j--)
      {
        cout << "_";
      }

      for (int j = 0; j < i + 1; j++)
      {
        cout << "+";
      }

      cout << "\n";
    }
  }
}
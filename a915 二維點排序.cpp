#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    int x[a];
    int y[a];

    for (int i = 0; i < a; i++)
    {
      cin >> x[i] >> y[i];
    }

    for (int i = 0; i < a; i++)
    {
      for (int j = i + 1; j < a; j++)
      {
        if (
            x[i] > x[j] ||
            (x[i] == x[j] &&
             y[i] > y[j]))
        {
          int b = x[i];

          x[i] = x[j];
          x[j] = b;

          b = y[i];
          y[i] = y[j];
          y[j] = b;
        }
      }
    }

    for (int i = 0; i < a; i++)
    {
      cout << x[i] << " " << y[i] << "\n";
    }
  }
}
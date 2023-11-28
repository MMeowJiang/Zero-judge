#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    int b[30001] = {0};
    int c;

    for (int i = 0; i < a; i++)
    {
      cin >> c;
      b[c] += 1;
    }

    int max = -1;

    for (int i = 0; i < 30001; i++)
    {
      if (b[i] > max)
      {
        max = b[i];
      }
    }

    for (int i = 0; i < 30001; i++)
    {
      if (b[i] == max)
      {
        cout << i << " " << b[i] << "\n";
      }
    }
  }
}
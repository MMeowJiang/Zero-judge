#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int b;
    int c;

    cin >> b >> c;

    int d[b * c];
    int e[b * c];
    int f = 0;

    for (int j = 0; j < b * c; j++)
    {
      cin >> d[j];
    }

    for (int j = b * c - 1; j >= 0; j--)
    {
      e[f] = d[j];
      f++;
    }

    bool is = true;

    for (int j = 0; j < b * c; j++)
    {
      if (e[j] != d[j])
      {
        cout << "keep defending\n";
        is = false;
        break;
      }
    }

    if (is)
    {
      cout << "go forward\n";
    }
  }
}
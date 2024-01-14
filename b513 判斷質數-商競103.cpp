#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  while (a--)
  {
    int b;
    bool c = false;

    cin >> b;

    for (int i = 2; i < b; i++)
    {
      if (b % i == 0)
      {
        cout << "N\n";
        c = true;
        break;
      }
    }

    if (!c)
      cout << "Y\n";
  }
}
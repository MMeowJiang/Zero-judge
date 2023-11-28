#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    for (int i = 1; i < a; i++)
    {
      if (i % 7 == 0)
      {
        continue;
      }

      cout << i << " ";
    }

    cout << endl;
  }
}
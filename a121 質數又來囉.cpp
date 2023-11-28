#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;
  int b;

  while (cin >> a >> b)
  {
    int num = 0;

    for (int i = a; i <= b; i++)
    {
      int test = 0;

      for (int j = 2; j <= ceil((int)sqrt(i)); j++)
      {
        if (i % j == 0)
        {
          test++;
          break;
        }
      }

      if (test == 0)
      {
        num++;
      }
    }

    if (
        a == 1 ||
        b == 1)
    {
      num--;
    }

    cout << num << endl;
  }
}
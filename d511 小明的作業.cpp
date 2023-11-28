#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  int d = 0;

  while (cin >> a >> b >> c)
  {
    bool is = false;

    if (
        a + b > c &&
        a + c > b &&
        b + c > a &&
        abs(a - b) < c &&
        abs(a - c) < b &&
        abs(b - c) < a)
    {
      is = true;
    }

    if (is)
    {
      d += 1;
    }
  }

  cout << d;
}
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;

  cin >> a >> b >> c >> d >> e >> f;

  for (int i = 0; i < 2000000; i++)
  {
    if (
        (i - b) % a == 0 &&
        (i - d) % c == 0 &&
        (i - f) % e == 0)
    {
      cout << i;
      break;
    }
  }
}
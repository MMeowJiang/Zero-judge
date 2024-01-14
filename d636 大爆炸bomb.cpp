#include <iostream>

using namespace std;

int pow(int a, int b)
{
  int c = 1;

  while (b > 0)
  {
    if (b % 2 == 1)
    {
      c = (c * a) % 10007;
    }

    a = (a * a) % 10007;
    b /= 2;
  }

  return c;
}

int main()
{
  int a;
  int b;

  cin >> a >> b;

  cout << pow(a, b) << "\n";
}
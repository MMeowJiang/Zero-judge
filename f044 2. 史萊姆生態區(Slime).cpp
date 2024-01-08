#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if (!a)
  {
    return b;
  }

  return gcd(b % a, a);
}

int main()
{
  int a;
  int b;
  int c = 0;
  int d;
  int e = 0;

  cin >> a >> b;

  d = gcd(a, b);
  a /= d;
  b /= d;

  while (e < b)
  {
    e = e * 2 + a;
    c++;
  }

  cout << c;
}
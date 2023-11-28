#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int c;

  while (cin >> c && c != 0)
  {
    long a = 1;

    for (int i = 0; i < c; i++)
    {
      long b;

      cin >> b;

      a = (a * b) / __gcd(a, b);
    }

    cout << a << "\n";
  }
  return 0;
}
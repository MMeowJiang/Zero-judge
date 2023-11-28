#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long x;

  while (cin >> x)
  {
    long long sum = 0;
    long long r;

    for (int i = 2; i <= sqrt(x); i++)
    {
      r = x % i;

      while (r == 0)
      {
        sum += i;
        x /= i;
        r = x % i;
      }
    }

    if (x != 1)
    {
      sum += x;
    }

    cout << sum << endl;
  }
}
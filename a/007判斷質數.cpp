#include <iostream>
#include <cmath>

using namespace std;

long long fastModExp(long long x, long long y, long long p)
{
  long long res = 1;
  x = x % p;

  while (y > 0)
  {
    if (y & 1)
    {
      res = (res * x) % p;
    }

    y = y >> 1;
    x = (x * x) % p;
  }

  return res;
}

bool isPrime(long long n, int k)
{
  if (n <= 1 || n == 4)
  {
    return false;
  }

  if (n <= 3)
  {
    return true;
  }

  long long r = 0;
  long long d = n - 1;

  while (d % 2 == 0)
  {
    d = d / 2;
    r++;
  }

  for (int i = 0; i < k; i++)
  {
    long long a = 2 + rand() % (n - 3);
    long long x = fastModExp(a, d, n);

    if (x == 1 || x == n - 1)
    {
      continue;
    }

    bool isPrime = false;

    for (long long j = 0; j < r - 1; j++)
    {
      x = fastModExp(x, 2, n);

      if (x == n - 1)
      {
        isPrime = true;
        break;
      }
    }

    if (!isPrime)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int k = 5;

  long long n;
  while (cin >> n)
  {
    if (isPrime(n, k))
    {
      cout << "質數" << endl;
    }
    else
    {
      cout << "非質數" << endl;
    }
  }

  return 0;
}
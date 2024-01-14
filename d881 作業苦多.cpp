#include <iostream>

using namespace std;

int main()
{
  int d, m, k;
  long long n;

  while (cin >> d)
  {
    n = 3;
    m = 0;
    k = 2;

    for (int i = 1; i < 49; i++)
    {
      m = i * d + k + 1;
      k = m;
      n += m;
    }

    cout << n << "\n";
  }
}
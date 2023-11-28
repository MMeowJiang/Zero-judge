#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string a;
  int b = 0;
  int c = 0;

  cin >> a;

  for (int i = 0; i < a.length(); i++)
  {
    if (i % 2 == 1)
    {
      b += a[i] - '0';
    }
    else
    {
      c += a[i] - '0';
    }
  }

  cout << abs(b - c);
}
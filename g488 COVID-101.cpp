#include <iostream>
#include <cmath>

using namespace std;

int n(int x)
{
  if (x == 0)
  {
    return 0;
  }

  return n(x - 1) + pow(x, 2) - x + 1;
}

int main()
{
  int a;

  cin >> a;
  cout << n(a);
}
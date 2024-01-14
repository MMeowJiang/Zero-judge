#include <iostream>

using namespace std;

int F(int x)
{
  if (x == 1)
  {
    return 1;
  }
  else if (x % 2 == 0)
  {
    return F(x / 2);
  }
  else
  {
    return F(x - 1) + F(x + 1);
  }
}

int main()
{
  int a;

  cin >> a;
  cout << F(a);
}
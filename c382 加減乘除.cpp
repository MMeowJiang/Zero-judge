#include <iostream>

using namespace std;

int main()
{
  double a;
  double c;
  char b;
  double d;

  cin >> a >> b >> c;

  if (b == '+')
  {
    d = a + c;
  }
  else if (b == '-')
  {
    d = a - c;
  }
  else if (b == '*')
  {
    d = a * c;
  }
  else if (b == '/')
  {
    d = a / c;
  }

  cout << d;
}
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  cin >> a;

  if (
      a >= 0 &&
      a <= 5)
  {
    b = 0;
  }
  else if (
      a >= 6 &&
      a <= 11)
  {
    b = 590;
  }
  else if (
      a >= 12 &&
      a <= 17)
  {
    b = 790;
  }
  else if (
      a >= 18 &&
      a <= 59)
  {
    b = 890;
  }
  else if (
      a >= 60)
  {
    b = 399;
  }

  cout << b;
}
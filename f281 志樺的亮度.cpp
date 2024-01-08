#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int min1 = 999999;
  int min2 = 999999;
  int a;
  int b;
  int c;
  int temp;

  cin >> c;

  while (c--)
  {
    cin >> temp;

    if (temp < min1)
    {
      min2 = min1;
      min1 = temp;
    }
    else if (temp < min2)
    {
      min2 = temp;
    }
  }

  cin >> b;
  a = b - min1;

  if (min2 - a < b)
  {
    cout << "You are too black!";
  }
  else
  {
    cout << a;
  }
}
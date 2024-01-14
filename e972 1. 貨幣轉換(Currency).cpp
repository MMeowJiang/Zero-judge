#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  double a;
  double b;
  char c;
  double d;

  cin >> a >> b >> c;

  if (c == 'T')
    d = 1.0;
  else if (c == 'U')
    d = 30.9;
  else if (c == 'J')
    d = 0.28;
  else if (c == 'E')
    d = 34.5;

  double e = (a - d * b) / d;

  if (e > 0)
  {
    if (e > 0.05)
    {
      cout << c << " " << fixed << setprecision(2) << e;
    }
    else
    {
      cout << c << " 0.00";
    }
  }
  else
  {
    cout << "No Money";
  }
}
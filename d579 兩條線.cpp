#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double a;

  while (cin >> a)
  {
    cout << "|" << fixed << setprecision(4) << a << "|=" << fixed << setprecision(4) << abs(a) << "\n";
  }
}
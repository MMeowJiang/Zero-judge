#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double a;
  double b;

  cin >> a >> b;

  cout << fixed << setprecision(1) << a / pow(b, 2);
}
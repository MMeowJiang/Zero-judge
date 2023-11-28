#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  float x;
  float y;
  cin >> a >> b >> c >> d >> e >> f;

  if (a * e - b * d != 0)
  {
    cout << "x=" << fixed << setprecision(2) << (float)(c * e - f * b) / (float)(a * e - d * b) << "\ny=" << fixed << setprecision(2) << (float)(c * d - f * a) / (float(b * d - e * a));
  }
  else if (
      a * e - b * d == 0 &&
      (a * e - b * d != 0 ||
       a * f - c * d != 0))
  {
    cout << "No answer";
  }
  else
  {
    cout << "Too many";
  }
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int b;
    int c;
    int d;
    int e;

    cin >> b >> c >> d >> e;

    if (b == 1)
    {
      cout << fixed << setprecision(2) << 13.7 * e + 5.0 * d - 6.8 * c + 66 << "\n";
    }
    else
    {
      cout << fixed << setprecision(2) << 9.6 * e + 1.8 * d - 4.7 * c + 655 << "\n";
    }
  }
}
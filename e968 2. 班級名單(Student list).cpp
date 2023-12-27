#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  int b;
  int c;
  int d;

  cin >> b >> c >> d;

  for (int i = a; i > 0; i--)
  {
    if (!(
            b == i ||
            c == i ||
            d == i))
    {
      cout << "No. " << i << "\n";
    }
  }
}
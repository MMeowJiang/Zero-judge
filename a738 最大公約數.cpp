#include <iostream>

using namespace std;

int main()
{
  int t;
  int a;
  int b;

  while (cin >> a >> b)
  {
    while (b != 0)
    {
      t = b;
      b = a % b;
      a = t;
    }

    cout << a << endl;
  }
}
#include <iostream>

using namespace std;

int main()
{
  string a;

  while (cin >> a)
  {
    a[0] -= 32;

    cout << a << "\n";
  }
}
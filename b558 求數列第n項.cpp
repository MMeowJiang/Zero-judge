#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    cout << 1 + a * (a - 1) / 2 << "\n";
  }
}
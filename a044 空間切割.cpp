#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    cout << (a * a * a + 5 * a + 6) / 6 << endl;
  }
}
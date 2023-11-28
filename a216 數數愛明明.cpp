#include <iostream>

using namespace std;

int main()
{
  long long a;

  while (cin >> a)
  {
    cout << a * (a + 1) / 2 << " " << a * (a + 1) * (a + 2) / 6 << endl;
  }
}
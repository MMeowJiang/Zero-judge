#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long a;
  long long b;

  while (cin >> a >> b)
  {
    cout << abs(a - b) << "\n";
  }
}
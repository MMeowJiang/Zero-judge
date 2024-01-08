#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;

  cin >> a >> b >> c;

  int n = (b - a) / c + 1;

  for (int i = 0; i < n; i++)
  {
    cout << a + i * c << " ";
  }
}
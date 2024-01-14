#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a[5004];
  int b = 1;
  int c;

  a[0] = 1;

  for (int i = 1; i < 5004; i++)
  {
    b *= 3;

    while (b > 10006)
    {
      b -= 10007;
    }

    a[i] = b;
  }

  while (cin >> c)
  {
    cout << a[c % 5003] << "\n";
  }
}
#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a;

  while (cin >> a)
  {
    if (
        a == (a & (-a)) &&
        a != 0)
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }
}
#include <iostream>

using namespace std;

static const auto Initialize = []
{
  cin.sync_with_stdio(false);
  cout.tie(nullptr);
  return nullptr;
}();

int main()
{
  int a, b, c;

  while (cin >> a >> b >> c)
  {
    cout << a / b << '.';
    a %= b;

    if (c == 0)
    {
      cout << "\n";
      continue;
    }
    else
    {
      while (c--)
      {
        a = (a << 3) + (a << 1);
        cout << a / b;
        a %= b;
      }

      cout << '\n';
    }
  }
}
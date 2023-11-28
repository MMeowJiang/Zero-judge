#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;

  while (cin >> n)
  {
    auto dfs = [&](auto self, string &s, int lhs, int rhs) -> void
    {
      if (
          lhs < rhs ||
          lhs > n)
      {
        return;
      }

      if (lhs + rhs == 2 * n)
      {
        cout << s << "\n";
        return;
      }

      s[lhs + rhs] = '(';
      self(self, s, lhs + 1, rhs);
      s[lhs + rhs] = ')';
      self(self, s, lhs, rhs + 1);
    };

    string s(2 * n, '_');
    dfs(dfs, s, 0, 0);
    cout << "\n";
  }
  return 0;
}
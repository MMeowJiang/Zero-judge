#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

pair<int, int> calculateAB(const string &a, const string &b)
{
  int A = 0, B = 0;
  unordered_set<char> c;

  for (int i = 0; i < a.length(); ++i)
  {
    if (a[i] == b[i])
    {
      A++;
    }
    else
    {
      c.insert(a[i]);
    }
  }

  for (int i = 0; i < b.length(); ++i)
  {
    if (a[i] != b[i] && c.count(b[i]))
    {
      B++;
      c.erase(b[i]);
    }
  }

  return make_pair(A, B);
}

int main()
{
  string a;
  int m;

  cin >> a >> m;

  for (int i = 0; i < m; ++i)
  {
    string b;

    cin >> b;

    pair<int, int> c = calculateAB(a, b);

    cout << c.first << "A" << c.second << "B\n";
  }
}
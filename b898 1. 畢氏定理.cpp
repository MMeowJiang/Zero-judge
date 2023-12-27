#include <iostream>
#include <string>

using namespace std;

string str_max(string a, string b)
{
  if (a.length() == b.length())
  {
    for (int i = 0; i < a.length(); i++)
    {
      if (a[i] > b[i])
        return a;
      if (b[i] > a[i])
        return b;
    }
  }

  if (a.length() > b.length())
    return a;
  else
    return b;
}
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string a;
    string b;
    string c;

    cin >> a >> b >> c;

    string ans = str_max(a, str_max(b, c));

    cout << ans << "\n";
  }
  return 0;
}
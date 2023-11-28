#include <iostream>

using namespace std;

int to_int(char c)
{
  return c - '0';
}

int main()
{
  int a;
  cin >> a;

  while (a--)
  {
    string s;
    cin >> s;
    int ans = 1;

    for (char c : s)
    {
      ans *= to_int(c);
    }

    cout << ans << endl;
  }
}
#include <iostream>

using namespace std;

int main()
{
  int i;
  int w = 0;
  int h = 0;
  string s;

  cin >> s;

  for (i = 0; i < s.size(); i++)
  {
    if (
        s[i] >= 'A' &&
        s[i] <= 'Z')
    {
      w = w * 26 + s[i] - 'A' + 1;
    }
    else
    {
      h = h * 10 + s[i] - '0';
    }
  }

  cout << w * h << "\n";
}
#include <iostream>

using namespace std;

int main()
{
  string a;

  while (cin >> a)
  {
    string c = a;

    while (c.size() > 1)
    {
      int b = 0;

      for (int i = 0; i < c.size(); i++)
      {
        b += c[i] - '0';
      }

      c = to_string(b);
    }

    cout << c << "\n";
  }
}
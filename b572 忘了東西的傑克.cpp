#include <iostream>

using namespace std;

int main()
{
  int a;
  int h1;
  int m1;
  int h2;
  int m2;
  int m3;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    cin >> h1 >> m1 >> h2 >> m2 >> m3;

    int m4 = m2 - m1;
    int h4 = h2 - h1;

    if (m4 < 0)
    {
      m4 += 60;
      h4 -= 1;
    }

    if ((h4 * 60 + m4) >= m3)
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }
}
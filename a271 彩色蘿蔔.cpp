#include <iostream>
#include <sstream>
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  IOS;
  int x, y, z, w, n, m;
  int r;
  cin >> r;
  while (r--)
  {
    cin >> x >> y >> z >> w >> n >> m;
    string s;
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);
    int a;
    int k = 0;

    while (ss >> a)
    {
      m -= k * n;
      if (m <= 0)
      {
        cout << "bye~Rabbit\n";
        break;
      }

      if (a == 1)
      {
        m += x;
      }

      if (a == 2)
      {
        m += y;
      }

      if (a == 3)
      {
        m -= z;
      }

      if (a == 4)
      {
        m -= w;
        k++;
      }
      if (m <= 0)
      {
        cout << "bye~Rabbit\n";
        break;
      }
    }

    if (m > 0)
    {
      cout << m << "g\n";
    }
  }
}
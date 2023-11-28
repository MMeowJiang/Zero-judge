#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  char r[4];

  while (cin >> r[0] >> r[1] >> r[2] >> r[3])
  {
    int n;
    cin >> n;

    while (n--)
    {
      int sum1 = 0;
      int sum2 = 0;
      char c[4];
      char p[4];

      for (int i = 0; i < 4; i++)
        c[i] = r[i];

      for (int i = 0; i < 4; i++)
      {
        cin >> p[i];

        if (p[i] == c[i])
        {
          sum1++;
          p[i] = 'c';
          c[i] = 'c';
        }
      }

      for (int i = 0; i < 4; i++)
      {
        for (int j = 0; j < 4; j++)
        {
          if (
              c[j] == p[i] &&
              c[j] != 'c' &&
              p[i] != 'c')
          {
            sum2++;
            p[i] = 'c';
            c[j] = 'c';
          }
        }
      }

      cout << sum1 << "A" << sum2 << "B\n";
    }
  }
}
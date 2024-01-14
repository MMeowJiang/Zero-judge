#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a;
  int b;

  cin >> a >> b;

  for (int i = 0; i < a; i++)
  {
    unordered_set<int> c;
    int e = 0;

    for (int k = 0; k < 2; k++)
    {
      for (int j = 0; j < b; j++)
      {
        int d;

        cin >> d;

        if (k == 0)
        {
          c.insert(d);
        }
        else
        {
          if (c.find(d) != c.end())
          {
            e++;
          }
        }
      }
    }

    cout << e << "\n";
  }
}

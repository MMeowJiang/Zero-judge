#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int a;
  vector<int> e;
  int f = 0;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int b;
    vector<int> d;

    cin >> b;

    for (int j = 0; j < b; j++)
    {
      int c;

      cin >> c;
      d.push_back(c);
    }

    sort(d.begin(), d.end());
    e.push_back(d[0]);
    f++;
  }

  sort(e.begin(), e.end());
  cout << e[f - 1];
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int x = 0;
  int y = 0;
  int z = 0;
  vector<int> a;

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    a.push_back(k);
  }

  for (int i = 0; i < n; i++)
  {
    int mod = a[i] % 3;

    if (mod == 0)
    {
      x++;
    }
    else if (mod == 1)
    {
      y++;
    }
    else
    {
      z++;
    }
  }

  cout << x << " " << y << " " << z << endl;
}
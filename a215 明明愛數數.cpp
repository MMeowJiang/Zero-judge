#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;

  while (cin >> n >> m)
  {
    int sum = n;
    int i;

    for (i = 1; sum <= m; i++)
    {
      sum += n + i;
    }

    cout << i << endl;
  }
}
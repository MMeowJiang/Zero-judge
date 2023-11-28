#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;

  while (scanf("%d %d", &n, &m) != EOF)
  {
    int food[n];
    int sum[n];

    for (int i = 0; i < n; i++)
    {
      cin >> food[i];
      sum[i + 1] = sum[i] + food[i];
    }

    for (int i = 0; i < m; i++)
    {
      int l;
      int r;
      scanf("%d %d", &l, &r);
      printf("%d\n", sum[r] - sum[l - 1]);
    }
  }
}
#include <iostream>

int main()
{
  int n, m;
  while (scanf("%d%d", &n, &m) != EOF)
  {
    int food[n][n];
    int sum[n + 1][n + 1];

    for (int r = 0; r < n + 1; r++)
    {
      for (int c = 0; c < n + 1; c++)
      {
        sum[r][c] = 0;
      }
    }

    for (int r = 0; r < n; r++)
    {
      for (int c = 0; c < n; c++)
      {
        scanf("%d", &food[r][c]);
        sum[r + 1][c + 1] = sum[r + 1][c] + food[r][c];
      }
    }

    for (int i = 0; i < m; i++)
    {
      int x1;
      int y1;
      int x2, y2;
      int output = 0;
      scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

      for (int r = x1; r <= x2; r++)
      {
        output += sum[r][y2] - sum[r][y1 - 1];
      }

      printf("%d\n", output);
    }
  }
  return 0;
}
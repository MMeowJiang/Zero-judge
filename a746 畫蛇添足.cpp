#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;

  while (cin >> n >> m)
  {
    char matrix[n + 2][n + 2];

    for (int r = 0; r < n + 2; r++)
    {
      for (int c = 0; c < n + 2; c++)
      {
        matrix[c][r] = ' ';
      }
    }

    for (int i = 0; i < n + 2; i++)
    {
      matrix[0][i] = '|';
      matrix[n + 1][i] = '|';
    }

    for (int i = 0; i < n + 2; i++)
    {
      matrix[i][0] = '-';
      matrix[i][n + 1] = '-';
    }

    int x[m];
    int y[m];

    for (int i = 0; i < m; i++)
    {
      cin >> x[i] >> y[i];
    }

    for (int i = 0; i < m - 1; i++)
    {
      if (x[i] == x[i + 1])
      {
        int start = (y[i] < y[i + 1]) ? y[i] : y[i + 1];
        int end = (y[i] < y[i + 1]) ? y[i + 1] : y[i];

        for (int j = start; j <= end; j++)
        {
          matrix[j][x[i]] = '*';
        }
      }
      else if (y[i] == y[i + 1])
      {
        int start = (x[i] < x[i + 1]) ? x[i] : x[i + 1];
        int end = (x[i] < x[i + 1]) ? x[i + 1] : x[i];

        for (int j = start; j <= end; j++)
        {
          matrix[y[i]][j] = '*';
        }
      }
    }

    for (int r = 0; r < n + 2; r++)
    {
      for (int c = 0; c < n + 2; c++)
      {
        cout << matrix[c][r];
      }

      cout << endl;
    }
  }
}
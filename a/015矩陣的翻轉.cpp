#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int r;
  int c;

  while (cin >> r >> c)
  {
    vector<vector<int>> matrix(105, vector<int>(105));

    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        cin >> matrix[i][j];
      }
    }

    for (int i = 0; i < c; i++)
    {
      for (int j = 0; j < r; j++)
      {
        cout << matrix[j][i] << " ";
      }

      cout << endl;
    }
  }
}
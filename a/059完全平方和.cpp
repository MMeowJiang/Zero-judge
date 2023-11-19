#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;

  for (int i = 1; i <= a; i++)
  {
    int b;
    int c;
    int cnt = 0;
    cin >> b >> c;

    for (int j = 1; j <= 32; j++)
    {
      if (j * j < b)
        continue;
      if (j * j > c)
        break;

      cnt += j * j;
    }

    cout << "Case " << i << ": " << cnt << endl;
  }
}
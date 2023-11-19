#include <iostream>
#include <cmath>

using namespace std;

int N;
int M;

bool isarm(int n)
{
  int cnt = 0;
  int tmp = n;
  int ans = 0;

  while (tmp)
  {
    cnt++;
    tmp /= 10;
  }

  tmp = n;

  while (tmp)
  {
    ans += pow(tmp % 10, cnt);
    tmp /= 10;
  }

  if (ans == n)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  cin >> N >> M;
  bool ok = false;

  for (int i = N; i <= M; i++)
  {
    if (isarm(i))
    {
      ok = true;
      cout << i << " ";
    }
  }

  cout << ((!ok) ? "none\n" : "\n");
}
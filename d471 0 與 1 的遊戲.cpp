#include <iostream>

using namespace std;

int n;
char ans[16];

void dfs(int a)
{
  if (a == n)
  {
    cout << ans << "\n";
    return;
  }

  ans[a] = '0';
  dfs(a + 1);
  ans[a] = '1';
  dfs(a + 1);
}

int main()
{
  while (cin >> n)
  {
    ans[n] = 0;
    dfs(0);
  }
}
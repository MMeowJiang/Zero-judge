#include <iostream>
#include <vector>

using namespace std;

vector<long long> dp(105, -1);

long long count(int N)
{
  if (dp[N] != -1)
    return dp[N];

  dp[N] = count(N - 1) + count(N - 2);

  return dp[N];
}
int main()
{
  int a;

  dp[1] = 1;
  dp[2] = 2;

  while (cin >> a)
  {
    cout << count(a) << "\n";
  }
}
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  int n;

  while (cin >> n)
  {
    bitset<32> ans(n);
    bool flag = false;

    for (int i = 31; i >= 0; i--)
    {
      if (ans[i])
        flag = true;
      if (flag)
        cout << ans[i];
    }

    cout << endl;
  }
}
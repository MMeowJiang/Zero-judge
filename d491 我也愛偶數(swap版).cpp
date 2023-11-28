#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long long a;
  long long b;
  long long c;

  cin >> a >> b;

  vector<long long> d;

  d.push_back(a);
  d.push_back(b);

  sort(d.begin(), d.end());

  a = d[0];
  b = d[1];

  for (int i = a; i <= b; i++)
  {
    if (i % 2 == 0)
    {
      c += i;
    }
  }

  cout << c;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> a;
  int b;

  while (cin >> b)
  {
    a.push_back(b);
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < a.size() - 2; i += 3)
  {
    if (a[i] != a[i + 2])
    {
      cout << a[i] << "\n";
      break;
    }
  }
}
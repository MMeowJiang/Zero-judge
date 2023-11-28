#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    vector<int> b;

    for (int i = 0; i < a; i++)
    {
      int c;
      cin >> c;
      b.push_back(c);
    }

    reverse(b.begin(), b.end());

    for (int i = 0; i < a; i++)
    {
      cout << b[i] << " ";
    }
  }
}
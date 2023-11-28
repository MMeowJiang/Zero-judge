#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int a;
  int b;
  int c;

  cin >> a >> b >> c;

  vector<int> d;

  d.push_back(a);
  d.push_back(b);
  d.push_back(c);

  sort(d.begin(), d.end());

  a = d[0];
  b = d[1];
  c = d[2];

  if (pow(a, 2) + pow(b, 2) == pow(c, 2))
  {
    cout << "right triangle";
  }
  else if (pow(a, 2) + pow(b, 2) < pow(c, 2))
  {
    cout << "obtuse triangle";
  }
  else if (pow(a, 2) + pow(b, 2) > pow(c, 2))
  {
    cout << "acute triangle";
  }
}
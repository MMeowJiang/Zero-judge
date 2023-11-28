#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a;
  int b;
  int c;

  cin >> a >> b >> c;

  int d = a;
  d = max(d, b);
  d = max(d, c);

  cout << d;
}
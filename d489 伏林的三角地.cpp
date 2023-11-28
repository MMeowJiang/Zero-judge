#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  int d;

  cin >> a >> b >> c;

  d = (a + b + c) / 2;

  cout << d * (d - a) * (d - b) * (d - c);
}
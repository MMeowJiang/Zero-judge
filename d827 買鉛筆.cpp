#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  cin >> a;

  b = floor(a / 12);
  c = a % 12;

  cout << b * 50 + c * 5;
}
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;

  cin >> a >> b;

  cout << (b - a) / 2 + (b % 2 == 0 || a % 2 == 0);
}
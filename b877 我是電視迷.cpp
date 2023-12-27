#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;
  int b;

  cin >> a >> b;

  cout << ((b - a) % 100 + 100) % 100;
}
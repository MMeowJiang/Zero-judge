#include <iostream>

using namespace std;

int main()
{
  int a;
  int b = 0;

  cin >> a;

  while (a--)
  {
    int c;

    cin >> c;

    if (c <= 10)
      b++;
  }

  cout << b;
}
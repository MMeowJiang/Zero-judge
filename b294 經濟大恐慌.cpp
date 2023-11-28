#include <iostream>

using namespace std;

int main()
{
  int a;
  int b = 0;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int c;

    cin >> c;
    b += c * (i + 1);
  }

  cout << b;
}
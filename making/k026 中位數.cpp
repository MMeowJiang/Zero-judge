#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  int b[a + 1];

  for (int i = 0; i < a; i++)
  {
    int c;

    cin >> c;
    b[i] = c;
  }

  if (a % 2 == 0)
  {
    cout << (b[a / 2 - 1] + b[a / 2]) / 2;
  }
  else
  {
    cout << b[a / 2];
  }
}
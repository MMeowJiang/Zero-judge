#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  for (int i = 1; i <= a; i++)
  {
    for (int j = a - i - 1; j >= 0; j--)
    {
      cout << " ";
    }

    for (int j = 1; j <= i * 2 - 1; j++)
    {
      cout << "*";
    }

    for (int j = a - i - 1; j >= 0; j--)
    {
      cout << " ";
    }

    cout << "\n";
  }
}
#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      cout << "*";
    }

    cout << "\n";
  }
}
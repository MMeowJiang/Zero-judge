#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    if (a % 3 == 0)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }

    cout << "\n";
  }
}
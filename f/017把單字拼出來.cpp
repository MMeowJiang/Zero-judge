#include <iostream>

using namespace std;

int main()
{
  string a;

  cin >> a;

  for (int i = 0; i < a.length(); i++)
  {
    if (i != a.length() - 1)
    {
      cout << a[i] << "-";
    }
    else
    {
      cout << a[i];
    }
  }
}
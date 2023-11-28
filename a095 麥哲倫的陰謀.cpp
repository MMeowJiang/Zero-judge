#include <iostream>
#include <exception>

using namespace std;

int main()
{
  int n;
  int m;

  while (cin >> n >> m)
  {
    int day;

    if (n == m)
    {
      day = m;
    }
    else
    {
      day = m + 1;
    }

    cout << day << endl;
  }
}
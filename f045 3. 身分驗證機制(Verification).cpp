#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string a;

  cin >> a;

  int b = 0;
  int c = 0;
  int d = stoi(a.substr(6, 8));

  for (int i = 0; i < a.size(); i++)
  {
    b = max(b, a[i] - '0');
  }

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] - '0' == b)
    {
      a[i] = '0';
      break;
    }
  }

  for (int i = 0; i < a.size(); i++)
  {
    c = max(c, a[i] - '0');
  }

  if (pow(b, 2) + pow(c, 2) == d)
  {
    cout << "Good Morning!";
  }
  else
  {
    cout << "SPY!";
  }
}
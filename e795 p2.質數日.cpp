#include <iostream>
#include <cmath>

using namespace std;

bool prime(int a)
{
  if (a < 2)
  {
    return false;
  }

  for (int i = 2; i <= sqrt(a); i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }

  return true;
}

bool dates(const string &b)
{
  for (int i = 0; i < b.length(); i++)
  {
    int a = stoi(b.substr(i));

    if (!prime(a))
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int a;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    string b;

    cin >> b;

    if (dates(b))
    {
      cout << b << " is a Prime Day!\n";
    }
    else
    {
      cout << b << " isn't a Prime Day!\n";
    }
  }
}

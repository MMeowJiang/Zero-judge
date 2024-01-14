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

string better(int a)
{
  if (a < 10)
  {
    return "0" + to_string(a);
  }

  return to_string(a);
}

void date()
{
  for (int y = 2000; y <= 2999; y++)
  {
    for (int m = 1; m <= 12; m++)
    {
      for (int d = 1; d <= 31; d++)
      {
        if (m == 2 && d > 28)
        {
          break;
        }

        if ((
                m == 4 ||
                m == 6 ||
                m == 9 ||
                m == 11) &&
            d > 30)
        {
          break;
        }

        if (d > 31)
        {
          break;
        }

        string a = to_string(y * 10000 + m * 100 + d);
        bool is = true;

        for (int i = 0; i < a.length(); i++)
        {
          int b = stoi(a.substr(i));

          if (!prime(b))
          {
            is = false;
            break;
          }
        }

        if (is)
        {
          cout << better(y) << "/" << better(m) << "/" << better(d) << "\n";
        }
      }
    }
  }
}

int main()
{
  date();
}
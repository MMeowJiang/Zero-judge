#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int b;

    cin >> b;

    if (b % 4 == 0)
    {
      if (b % 400 == 0)
      {
        cout << "Case " << i + 1 <<": a leap year";
      }
      else
      {
        if (b % 100 == 0)
        {
          cout << "Case " << i + 1 <<": a normal year";
        }
        else
        {
          cout << "Case " << i + 1 <<": a leap year";
        }
      }
    }
    else
    {
      cout << "Case " << i + 1 <<": a normal year";
    }

    cout << "\n";
  }
}
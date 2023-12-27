#include <iostream>

using namespace std;

int main()
{
  string a;

  while (getline(cin, a))
  {
    int b = 0;
    bool c = false;

    for (int i = 0; i < a.size(); i++)
    {
      if (isalpha(a[i]))
      {
        if (!c)
        {
          c = true;
          b++;
        }
      }
      else
      {
        c = false;
      }
    }

    cout << b << "\n";
  }
}
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b = 0;
  int c = 0;
  int d = 0;
  int f = 0;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    string e;

    cin >> e;

    if (e == "Get_Kill")
    {
      b++;
      f++;

      if (f < 3)
      {
        cout << "You have slain an enemie.\n";
      }
      else if (f == 3)
      {
        cout << "KILLING SPREE!\n";
      }
      else if (f == 4)
      {
        cout << "RAMPAGE~\n";
      }
      else if (f == 5)
      {
        cout << "UNSTOPPABLE!\n";
      }
      else if (f == 6)
      {
        cout << "DOMINATING!\n";
      }
      else if (f == 7)
      {
        cout << "GUALIKE!\n";
      }
      else if (f >= 8)
      {
        cout << "LEGENDARY!\n";
      }
    }
    else if (e == "Get_Assist")
    {
      d++;
    }
    else if (e == "Die")
    {
      if (f < 3)
      {
        cout << "You have been slained.\n";
      }
      else
      {
        cout << "SHUTDOWN.\n";
      }

      f = 0;
      c++;
    }
  }

  cout << b << "/" << c << "/" << d;
}
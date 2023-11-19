#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;

  for (int i = 0; i < a; i++)
  {
    long long b;
    long long c;
    long long d;

    cin >> b;
    cin >> c;
    cin >> d;

    if (b == 1)
    {
      cout << c + d;
    }
    else if (b == 2)
    {
      cout << c - d;
    }
    else if (b == 3)
    {
      cout << c * d;
    }
    else if (b == 4)
    {
      cout << c / d;
    }

    cout << endl;
  }
}
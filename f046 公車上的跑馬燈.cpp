#include <iostream>

using namespace std;

int main()
{
  int a;
  string b;
  int c;

  cin >> a;
  cin.ignore();
  getline(cin, b);
  cin >> c;

  int d = c - a;

  for (int i = 0; i < a; i++)
  {
    if (
        d + i < 0 ||
        d + i > b.length() - 1)
    {
      cout << " ";
    }
    else
    {
      cout << b[d + i];
    }
  }
}
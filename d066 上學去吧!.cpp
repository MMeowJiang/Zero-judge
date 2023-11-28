#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;

  cin >> a >> b;

  int c = a * 100 + b;

  if (
      c >= 730 &&
      c < 1700)
  {
    cout << "At School";
  }
  else
  {
    cout << "Off School";
  }
}
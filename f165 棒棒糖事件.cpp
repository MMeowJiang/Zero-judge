#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;

  cin >> a >> b;

  if (b == 0)
  {
    cout << "OK!";
  }
  else if (a % b == 0)
  {
    cout << "OK!";
  }
  else
  {
    cout << a % b;
  }
}
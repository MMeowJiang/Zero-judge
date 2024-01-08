#include <iostream>

using namespace std;

bool isLeap(int a)
{
  return (
             a % 4 == 0 &&
             a % 100 != 0) ||
         a % 400 == 0;
}

int main()
{
  int a;
  int b;
  int c = 0;

  cin >> a >> b;

  for (int i = a; i <= b; i++)
  {
    if (isLeap(i))
    {
      c += 1;
    }
  }

  cout << c;
}
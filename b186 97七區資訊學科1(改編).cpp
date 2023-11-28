#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  int d = 0;

  while (cin >> a >> b >> c)
  {
    if (a / 10 >= c / 2)
    {
      d = c / 2;
    }
    else
    {
      d = a / 10;
    }

    cout << a << " 個餅乾，" << b + d << " 盒巧克力，" << c << " 個蛋糕。\n";
  }
}
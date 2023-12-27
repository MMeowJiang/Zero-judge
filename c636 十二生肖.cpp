#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;
  string b[12] = {
      "鼠",
      "牛",
      "虎",
      "兔",
      "龍",
      "蛇",
      "馬",
      "羊",
      "猴",
      "雞",
      "狗",
      "豬"};

  while (cin >> a)
  {
    if (a < 0)
    {
      a = 12 - (abs(a) % 12);
    }
    else
    {
      a -= 1;
    }

    a %= 12;
    cout << b[a] << "\n";
  }
}
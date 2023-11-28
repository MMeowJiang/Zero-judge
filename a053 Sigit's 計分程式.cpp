#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  int score;

  if (a >= 40)
  {
    score = 100;
  }
  else
  {
    if (a <= 10)
    {
      score = 6 * a;
    }
    else if (
        a >= 11 &&
        a <= 20)
    {
      score = 6 * 10 + 2 * (a - 10);
    }
    else if (
        a >= 21 &&
        a <= 39)
    {
      score = 6 * 10 + 2 * 10 + 1 * (a - 20);
    }
  }

  cout << score;
}
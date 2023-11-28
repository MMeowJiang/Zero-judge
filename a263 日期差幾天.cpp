#include <iostream>
#include <cmath>

using namespace std;

int months[] = {
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31};

bool leap(int y)
{
  return (
             y % 4 == 0 &&
             y % 100 != 0) ||
         y % 400 == 0;
}

int ds(
    int y,
    int m,
    int d)
{
  for (int i = 0; i < m - 1; i++)
  {
    d += months[i];
  }

  if (
      m > 2 &&
      leap(y))
  {
    d++;
  }

  return d + 365 * (y - 1) + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
}

int main()
{
  int y1;
  int y2;
  int m1;
  int m2;
  int d1;
  int d2;

  while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2)
  {
    cout << abs(ds(y1, m1, d1) - ds(y2, m2, d2)) << endl;
  }
}
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  char trash;

  while (cin >> a >> b)
  {
    int c = a * 100 + b;

    if (
        c >= 121 &&
        c <= 219)
    {
      cout << "Aquarius\n";
    }
    else if (
        c >= 220 &&
        c <= 320)
    {
      cout << "Pisces\n";
    }
    else if (
        c >= 321 &&
        c <= 420)
    {
      cout << "Aries\n";
    }
    else if (
        c >= 421 &&
        c <= 521)
    {
      cout << "Taurus\n";
    }
    else if (
        c >= 522 &&
        c <= 621)
    {
      cout << "Gemini\n";
    }
    else if (
        c >= 622 &&
        c <= 722)
    {
      cout << "Cancer\n";
    }
    else if (
        c >= 723 &&
        c <= 821)
    {
      cout << "Leo\n";
    }
    else if (
        c >= 822 &&
        c <= 923)
    {
      cout << "Virgo\n";
    }
    else if (
        c >= 924 &&
        c <= 1023)
    {
      cout << "Libra\n";
    }
    else if (
        c >= 1024 &&
        c <= 1122)
    {
      cout << "Scorpio\n";
    }
    else if (
        c >= 1123 &&
        c <= 1222)
    {
      cout << "Sagittarius\n";
    }
    else
    {
      cout << "Capricorn\n";
    }
  }
}
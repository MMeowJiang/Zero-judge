#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  char trash;

  while (scanf("%d%c%d", &a, &trash, &b) != EOF)
  {
    int c = a * 100 + b;

    if (
        c >= 121 &&
        c <= 219)
    {
      cout << "水瓶座\n";
    }
    else if (
        c >= 220 &&
        c <= 320)
    {
      cout << "雙魚座\n";
    }
    else if (
        c >= 321 &&
        c <= 420)
    {
      cout << "牡羊座\n";
    }
    else if (
        c >= 421 &&
        c <= 521)
    {
      cout << "金牛座\n";
    }
    else if (
        c >= 522 &&
        c <= 621)
    {
      cout << "雙子座\n";
    }
    else if (
        c >= 622 &&
        c <= 722)
    {
      cout << "巨蟹座\n";
    }
    else if (
        c >= 723 &&
        c <= 821)
    {
      cout << "獅子座\n";
    }
    else if (
        c >= 822 &&
        c <= 923)
    {
      cout << "處女座\n";
    }
    else if (
        c >= 924 &&
        c <= 1023)
    {
      cout << "天秤座\n";
    }
    else if (
        c >= 1024 &&
        c <= 1122)
    {
      cout << "天蠍座\n";
    }
    else if (
        c >= 1123 &&
        c <= 1222)
    {
      cout << "射手座\n";
    }
    else
    {
      cout << "摩羯座\n";
    }
  }
}
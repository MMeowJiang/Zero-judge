#include <iostream>

using namespace std;

int main()
{
  string s1[5] = {
      "Medium Wac",
      "WChicken Nugget",
      "Geez Burger",
      "ButtMilk Crispy Chicken",
      "Plastic Toy"};

  string s2[4] = {
      "German Fries",
      "Durian Slices",
      "WcFurry",
      "Chocolate Sunday"};

  int p1[5] = {
      4,
      8,
      7,
      6,
      3};

  int p2[5] = {
      2,
      3,
      5,
      7};

  int a;
  int b;
  int c = 0;

  while (cin >> a)
  {
    if (a == 0)
    {
      cout << "Total: " << c << "\n";
      break;
    }
    else if (a == 1)
    {
      cin >> b;
      c += p1[b - 1];
      cout << s1[b - 1] << " " << p1[b - 1] << "\n";
    }
    else if (a == 2)
    {
      cin >> b;
      c += p2[b - 1];
      cout << s2[b - 1] << " " << p2[b - 1] << "\n";
    }
  }
}
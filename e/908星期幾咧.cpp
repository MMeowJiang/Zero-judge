#include <iostream>

using namespace std;

int main()
{
  string days[] = {
      "Sunday",
      "Monday",
      "Tuesday",
      "Wednesday",
      "Thursday",
      "Friday",
      "Saturday"};

  string a;
  long long b;
  long long c;

  cin >> a >> b;

  if (a == "Sunday")
  {
    c = 0;
  }
  else if (a == "Monday")
  {
    c = 1;
  }
  else if (a == "Tuesday")
  {
    c = 2;
  }
  else if (a == "Wednesday")
  {
    c = 3;
  }
  else if (a == "Thursday")
  {
    c = 4;
  }
  else if (a == "Friday")
  {
    c = 5;
  }
  else if (a == "Saturday")
  {
    c = 6;
  }

  c += b;
  c %= 7;

  cout << days[c];
}
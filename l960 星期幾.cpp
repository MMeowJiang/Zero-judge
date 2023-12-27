#include <iostream>

using namespace std;

int main()
{
  string a;

  cin >> a;

  if (a == "Sunday")
  {
    cout << 0;
  }
  else if (a == "Monday")
  {
    cout << 1;
  }
  else if (a == "Tuesday")
  {
    cout << 2;
  }
  else if (a == "Wednesday")
  {
    cout << 3;
  }
  else if (a == "Thursday")
  {
    cout << 4;
  }
  else if (a == "Friday")
  {
    cout << 5;
  }
  else if (a == "Saturday")
  {
    cout << 6;
  }
  else
  {
    cout << "error";
  }
}
#include <iostream>

using namespace std;

int main()
{
  int a;

  string months[] = {
      "January",
      "February",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "October",
      "November",
      "December"};

  cin >> a;
  cout << months[a - 1];
}
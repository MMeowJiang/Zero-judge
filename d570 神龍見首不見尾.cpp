#include <iostream>

using namespace std;

int main()
{
  string a;

  cin >> a;

  int b = a.size();

  for (int i = 0; i < b; i++)
  {
    cout << a << "\n";
    a = a.substr(0, a.length() - 1);
  }
}
#include <iostream>

using namespace std;

int main()
{
  string a;
  string b;

  cin >> a;

  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < a.size(); j++)
    {
      b += a[(j + i) % a.size()];
    }

    cout << b << "\n";
    b = "";
  }
}
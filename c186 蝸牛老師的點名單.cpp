#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  string a;
  string b;
  string c[50];

  while (getline(cin, a))
  {
    int i = 0;
    stringstream ss(a);

    while (getline(ss, b, ' '))
    {
      c[i] = b;
      cout << b << "\n";
      i++;
    }
  }
}
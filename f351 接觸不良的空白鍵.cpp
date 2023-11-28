#include <iostream>
#include <string>

using namespace std;

string replaceAll(
    string str,
    const string &from,
    const string &to)
{
  size_t a = 0;

  while ((a = str.find(from, a)) != string::npos)
  {
    str.replace(a, from.length(), to);
    a += to.length();
  }

  return str;
}

int main()
{
  string a;
  getline(cin, a);

      while (a.find("  ") != string::npos)
  {
    a = replaceAll(a, string("  "), string(" "));
  }

  cout << a;
}
#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string a)
{
  size_t pos = 0;
  string b = " ";
  vector<string> c;

  while ((pos = a.find(b)) != string::npos)
  {
    string token = a.substr(0, pos);

    c.push_back(token);
    a.erase(0, pos + b.size());
  }

  if (!a.empty())
  {
    c.push_back(a);
  }

  return c;
}

int main()
{
  string a;
  string b;

  getline(cin, a);
  getline(cin, b);

  vector<string> c = split(a);

  for (int i = 0; i < c.size(); i++)
  {
    cout << b << ", " << c[i] << "\n";
  }
}
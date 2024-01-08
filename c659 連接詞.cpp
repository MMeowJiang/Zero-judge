#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string a;
  vector<string> b;
  string c = " ";
  size_t pos = 0;
  int e = 0;

  getline(cin, a);

  while ((pos = a.find(c)) != string::npos)
  {
    string token = a.substr(0, pos);

    b.push_back(token);
    a.erase(0, pos + c.length());
    e++;
  }

  b.push_back(a);

  string d = b[0];

  for (int i = 0; i < e; i++)
  {
    cout << b[i + 1];

    if (i != e - 1)
    {
      cout << " " << d << " ";
    }
  }
}
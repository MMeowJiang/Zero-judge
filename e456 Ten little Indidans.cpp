#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string a;
  vector<string> b;
  string delimiter = " ";
  string token;
  size_t pos = 0;

  getline(cin, a);

  while ((pos = a.find(delimiter)) != string::npos)
  {
    token = a.substr(0, pos);
    b.push_back(token);
    a.erase(0, pos + delimiter.length());
  }

  b.push_back(a);

  for (int i = 0; i < b.size(); i++)
  {
    if (i != 0)
    {
      cout << ", ";
    }

    cout << b[i] << " little";
  }

  cout << " Indians";
}
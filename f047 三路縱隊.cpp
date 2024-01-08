#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string a;
  vector<string> b;
  string c = " ";
  size_t pos = 0;
  vector<vector<string>> d(3);
  int e = 0;
  int f[4] = {0};

  getline(cin, a);

  while ((pos = a.find(c)) != string::npos)
  {
    string token = a.substr(0, pos);

    b.push_back(token);
    a.erase(0, pos + c.length());
    e++;
  }

  if (!a.empty())
  {
    b.push_back(a);
    e++;
  }

  for (int i = 0; i < e; i++)
  {
    d[i % 3].push_back(b[i]);
    f[i % 3]++;
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < f[i]; j++)
    {
      cout << d[i][j] << " ";
    }
    cout << "\n";
  }
}
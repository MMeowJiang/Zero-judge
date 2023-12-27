#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string a;
  vector<string> aSplit;
  int b;

  getline(cin, a);
  cin >> b;

  string delimiter = " ";
  size_t pos = 0;
  string token;

  while ((pos = a.find(delimiter)) != string::npos)
  {
    token = a.substr(0, pos);
    aSplit.push_back(token);
    a.erase(0, pos + delimiter.length());
  }

  aSplit.push_back(a);
  cout << aSplit[aSplit.size() - b] << "\n";
}
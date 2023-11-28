#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  stringstream ss(s);
  int a;
  ss >> a;
  cout << a << endl;
}
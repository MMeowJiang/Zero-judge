#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> d;
string s;

void init()
{
  d['A'] = 1;
  d['B'] = 10;
  d['C'] = 19;
  d['D'] = 28;
  d['E'] = 37;
  d['F'] = 46;
  d['G'] = 55;
  d['H'] = 64;
  d['I'] = 39;
  d['J'] = 73;
  d['K'] = 82;
  d['L'] = 2;
  d['M'] = 11;
  d['N'] = 20;
  d['O'] = 48;
  d['P'] = 29;
  d['Q'] = 38;
  d['R'] = 47;
  d['S'] = 56;
  d['T'] = 65;
  d['U'] = 74;
  d['V'] = 83;
  d['W'] = 21;
  d['X'] = 3;
  d['Y'] = 12;
  d['Z'] = 30;
  cin >> s;
}

int to_int(char c)
{
  return c - '0';
}

bool legal()
{
  int ans = d[s[0]];

  for (int i = 1; i < 9; i++)
  {
    ans += to_int(s[i]) * (9 - i);
  }

  return (ans + to_int(s[9])) % 10 == 0;
}

int main()
{
  init();
  string result[2] = {
      "fake\n",
      "real\n"};

  cout << result[legal()];
}
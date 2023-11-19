#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, string> d;

void init()
{
  d['A'] = "10";
  d['B'] = "11";
  d['C'] = "12";
  d['D'] = "13";
  d['E'] = "14";
  d['F'] = "15";
  d['G'] = "16";
  d['H'] = "17";
  d['I'] = "34";
  d['J'] = "18";
  d['K'] = "19";
  d['L'] = "20";
  d['M'] = "21";
  d['N'] = "22";
  d['O'] = "35";
  d['P'] = "23";
  d['Q'] = "24";
  d['R'] = "25";
  d['S'] = "26";
  d['T'] = "27";
  d['U'] = "28";
  d['V'] = "29";
  d['W'] = "32";
  d['X'] = "30";
  d['Y'] = "31";
  d['Z'] = "33";
}

string s;

int to_int(char c)
{
  return c - '0';
}

bool check(string t)
{
  int ans = to_int(t[0]);

  for (int i = 1; i < 10; i++)
  {
    ans += to_int(t[i]) * (10 - i);
  }

  int x = (10 - ans % 10 != 10) ? (10 - ans % 10) : 0;
  return (x == to_int(t[t.size() - 1]));
}

int main()
{
  init();
  cin >> s;

  for (char i : "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
  {
    if (check(d[i] + s))
    {
      cout << i;
    }
  }

  cout << endl;
}
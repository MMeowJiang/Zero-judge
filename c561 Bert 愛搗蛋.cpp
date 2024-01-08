#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int Reverse(int a)
{
  string b = to_string(a);
  string c = "";

  for (int i = b.size(); i > 0; i--)
  {
    c += b[i - 1];
  }

  return stoi(c);
}

int main()
{
  int a;
  int c = 0;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int b;

    cin >> b;
    b = Reverse(b);
    c = max(c, b);
  }

  cout << c;
}
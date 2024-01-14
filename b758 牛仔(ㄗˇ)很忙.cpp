#include <iostream>

using namespace std;

string better(int x)
{
  if (x < 10)
    return "0" + to_string(x);

  return to_string(x);
}

int main()
{
  int a;
  int b;

  cin >> a >> b;

  a += 2;
  b += 30;

  if (b >= 60)
  {
    a++;
    b -= 60;
  }

  if (a >= 24)
  {
    a -= 24;
  }

  cout << better(a) << ":" << better(b);
}
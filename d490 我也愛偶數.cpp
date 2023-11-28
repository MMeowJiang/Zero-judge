#include <iostream>

using namespace std;

int main()
{
  long long a;
  long long b;
  long long c;

  cin >> a >> b;

  for (int i = a; i <= b; i++)
  {
    if (i % 2 == 0)
    {
      c += i;
    }
  }

  cout << c;
}
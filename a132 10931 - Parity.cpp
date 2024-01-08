#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;

  while (
      cin >> n &&
      n != 0)
  {
    int a = 30;
    bitset<32> b = n;

    while (b[a] != 1)
    {
      a--;
    }

    cout << "The parity of ";

    for (; a >= 0; a--)
    {
      cout << b[a];
    }

    cout << " is " << b.count() << " (mod 2).\n";
  }
}
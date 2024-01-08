#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int x;
    int y;

    cin >> x >> y;

    int b = 100 - pow(sqrt(x + y), 2);

    if (
        b > 0 &&
        b <= 30)
    {
      cout << "sad!\n";
    }
    else if (
        b > 30 &&
        b <= 60)
    {
      cout << "hmm~~\n";
    }
    else if (
        b > 60 &&
        b < 100)
    {
      cout << "Happyyummy\n";
    }
    else
    {
      cout << "evil!!\n";
    }
  }
}
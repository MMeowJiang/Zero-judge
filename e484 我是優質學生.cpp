#include <iostream>

using namespace std;

bool isPrime(int a)
{
  bool is = false;

  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      is = true;
      break;
    }
  }

  return !is;
}

int main()
{
  int a;

  cin >> a;

  if (isPrime(a))
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
}
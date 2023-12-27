#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a = 0;

  for (int i = 0; i < 1023; i++)
  {
    a += pow(i + 1, 2);
  }

  cout << a;
}
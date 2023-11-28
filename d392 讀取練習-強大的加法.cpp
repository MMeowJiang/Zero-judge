#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
  long int a, b;
  int c, i;
  char in[10000];

  while (cin.getline(in, sizeof(in)))
  {
    a = 0;
    b = 0;
    c = strlen(in);

    for (i = 0; i < c; i++)
    {
      if (in[i] >= 48 && in[i] <= 57)
      {
        b = b * 10 + (in[i] - 48);
      }
      else if (in[i] == 32)
      {
        a = a + b;
        b = 0;
      }
    }

    printf("%ld\n", a + b);
  }
}
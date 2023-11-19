#include <iostream>

using namespace std;

int main()
{
  while (1)
  {
    int num;
    int time = 0;
    scanf("%d", &num);

    if (num == 0)
    {
      break;
    }

    while (num % 2 == 1)
    {
      num /= 2;
      time++;
    }

    printf("%d\n", time);
  }
}
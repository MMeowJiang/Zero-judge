#include <cstdio>

inline bool fastscan(unsigned int &num)
{
  bool neg = false;
  int c;

  num = 0;

  while ((c = getchar_unlocked()) && (c < '0' || c > '9'))
  {
    if (c == EOF)
      return false;
    if (c == '-')
      neg = true;
  }

  do
  {
    num = num * 10 + c - '0';
  } while ((c = getchar_unlocked()) && (c >= '0' && c <= '9'));

  if (neg)
    num = -num;

  return true;
}

inline void fastprint(unsigned int num)
{
  if (num < 0)
  {
    putchar_unlocked('-');
    num = -num;
  }

  int rev = num, count = 0;

  do
  {
    count++;
    rev /= 10;
  } while (rev);

  char buf[count];
  int i = count - 1;

  do
  {
    buf[i--] = num % 10 + '0';
    num /= 10;
  } while (num);

  for (i = 0; i < count; i++)
  {
    putchar_unlocked(buf[i]);
  }

  putchar_unlocked('\n');
}

int main()
{
  unsigned int a, b;

  while (true)
  {
    if (!fastscan(a))
      break;
    if (!fastscan(b))
      break;

    unsigned int c = a + b;
    fastprint(c);
  }
}

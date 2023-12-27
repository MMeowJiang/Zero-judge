#include <iostream>

using namespace std;

int indexOf(string a, char word)
{
  int index = -1;

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == word)
    {
      index = i;
      break;
    }
  }

  return index;
}

int main()
{
  string a;
  string b;

  cin >> a >> b;

  for (int i = 0; i < b.size(); i++)
  {
    if (indexOf(a, b[i]) != -1)
    {
      cout << indexOf(a, b[i]) + 1 << " ";
      a[indexOf(a, b[i])] = ' ';
    }
    else
    {
      cout << "X ";
    }
  }
}
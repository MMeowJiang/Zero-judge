#include <iostream>

using namespace std;

void init(
    string &a,
    string &b)
{
  while (a.size() < b.size())
    a = '0' + a;
  while (a.size() > b.size())
    b = '0' + b;
}

bool findMax(
    string &a,
    string &b)
{
  if (a < b)
  {
    swap(a, b);
    return true;
  }

  return 0;
}

bool del(string &a)
{
  if (a[0] == '0')
  {
    a.erase(0, 1);
    return true;
  }
  else
    return false;
}

void delAllZero(string &a)
{
  while (del(a))
  {
    del(a);
  }
}

string add(
    string a,
    string b)
{
  init(a, b);
  a = '0' + a;
  b = '0' + b;

  for (int i = a.size() - 1; i >= 0; i--)
  {
    int num1 = a[i] - '0';
    int num2 = b[i] - '0';

    if (num1 + num2 > 9)
    {
      a[i - 1] = a[i - 1] - '0' + 1 + '0';
      a[i] = (num1 + num2 - 10) + '0';
    }
    else
      a[i] = (num1 + num2) + '0';
  }

  del(a);
  return a;
}

string sub(
    string a,
    string b)
{
  init(a, b);
  if (a == b)
    return "0";

  int fg = findMax(a, b);

  for (int i = a.size() - 1; i >= 0; i--)
  {
    int n1 = a[i] - '0';
    int n2 = b[i] - '0';

    if (n1 < n2)
    {
      a[i - 1] = a[i - 1] - '0' - 1 + '0';
      a[i] = (n1 - n2 + 10) + '0';
    }
    else
    {
      a[i] = (n1 - n2) + '0';
    }
  }

  delAllZero(a);

  if (fg)
    return "-" + a;

  return a;
};

string mul(
    string a,
    string b)
{
  string res = "0";
  init(a, b);
  findMax(a, b);
  delAllZero(b);

  for (int i = b.size() - 1; i >= 0; i--)
  {
    int num1 = b[i] - '0';

    if (i != b.size() - 1)
      a = a + '0';

    for (int i = 0; i < num1; i++)
    {
      res = add(a, res);
    }
  }

  return res;
}

string div(
    string a,
    string b)
{
  init(a, b);

  if (a < b)
    return "0";

  delAllZero(b);
  string res = "0";
  string restmp = "1";
  string tmp = b;

  for (int i = 0; i < (a.size() - b.size()); i++)
  {
    restmp += '0';
    tmp += '0';
  }

  init(a, b);

  while (a >= b)
  {
    init(a, tmp);

    if (a >= tmp)
    {
      a = sub(a, tmp);
      res = add(res, restmp);
    }
    else
    {
      restmp.erase(restmp.size() - 1);
      tmp.erase(tmp.size() - 1);
    }

    init(a, b);
  }

  delAllZero(res);
  return res;
}

void run(
    string &op,
    string &a,
    string &b)
{
  if (op == "/")
    cout << div(a, b) << endl;
  if (op == "*")
    cout << mul(a, b) << endl;
  if (op == "-")
    cout << sub(a, b) << endl;
  if (op == "+")
    cout << add(a, b) << endl;
}

int main()
{
  string a, b, op;
  cin >> a >> op >> b;
  run(op, a, b);
}
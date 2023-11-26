#include <iostream>

using namespace std;

int main()
{
  string a;
  int b;
  int c;

  cin >> a >> b;

  if (a == "ShunZhi")
  {
    c = 1644;
  }
  else if (a == "KangXi")
  {
    c = 1662;
  }
  else if (a == "YongZheng")
  {
    c = 1723;
  }
  else if (a == "QianLong")
  {
    c = 1736;
  }
  else if (a == "JiaQing")
  {
    c = 1796;
  }
  else if (a == "DaoGuang")
  {
    c = 1821;
  }
  else if (a == "XianFeng")
  {
    c = 1851;
  }
  else if (a == "TongZhi")
  {
    c = 1862;
  }
  else if (a == "GuangXu")
  {
    c = 1875;
  }
  else if (a == "XuanTong")
  {
    c = 1909;
  }

  cout << c + b - 1;
}
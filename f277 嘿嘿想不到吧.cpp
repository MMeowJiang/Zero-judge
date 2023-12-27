#include <iostream>
#include <algorithm>

using namespace std;

struct a
{
  int a;
  int b;
  string c;
  string d;
};

bool b(a e, a f)
{
  return e.a != f.a ? e.a < f.a : e.b < f.b;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int d;

  cin >> d;
  a arr[d];

  for (int i = 0; i < d; i++)
  {
    cin >> arr[i].c >> arr[i].a >> arr[i].b >> arr[i].d;
  }

  sort(arr, arr + d, b);

  cout << arr[0].a << " " << arr[0].b << " " << arr[0].c << "\n"
       << arr[0].d;

  for (int i = 1; i < d; i++)
  {
    cout << "\n"
         << arr[i].a << " " << arr[i].b << " " << arr[i].c << "\n"
         << arr[i].d;
  }
}
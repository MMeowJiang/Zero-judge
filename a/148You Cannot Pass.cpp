#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    int arr[a + 1];
    int num;
    float sum = 0;

    for (int i = 0; i < a; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }

    if (sum / a > 59)
    {
      cout << "no";
    }
    else
    {
      cout << "yes";
    }

    cout << endl;
  }
}
#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    int arr[a];

    for (int i = 0; i < a; i++)
    {
      cin >> arr[i];
    }

    for (int i = 1; i < a; i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (arr[j] % 10 > arr[i] % 10)
        {
          int tmp = arr[i];
          arr[i] = arr[j];
          arr[j] = tmp;
        }
        else if (
            arr[j] % 10 == arr[i] % 10 &&
            arr[j] < arr[i])
        {
          int tmp = arr[i];
          arr[i] = arr[j];
          arr[j] = tmp;
        }
      }
    }

    for (int i = 0; i < a; i++)
    {
      cout << arr[i] << " ";
    }

    cout << endl;
  }
}
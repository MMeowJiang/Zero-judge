#include <iostream>

using namespace std;

int main() {
  int n;
  int m;

  while(cin >> n >> m) {
    int food[n];
    int sum[n];

    for (int i = 0 ; i < n ; i++) {
      cin >> food[i];
      sum[i + 1] = sum[i] + food[i];
    }

    for (int i = 0 ; i < m ; i++) {
      int l;
      int r;
      cin >> l >> r;
      cout << sum[r] - sum[l - 1] << endl;
    }
  }
}
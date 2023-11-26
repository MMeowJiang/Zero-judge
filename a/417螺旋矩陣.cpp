#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int n;
  int N;
  int M;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> N >> M;
    
    int arr[N][N];
    int d = 0;
    int r = 0;
    int c = 0;
    int l = N;
    int t = 1;
    int time = 0;

    for (int j = 0; j < pow(N, 2); j++) {
      arr[r][c] = j + 1;
      t++;

      if (M == 1) {
        switch(d) {
        case 0:
          c++;
          break;

        case 1:
          r++;
          break;

        case 2:
          c--;
          break;

        case 3:
          r--;
          break;
        }
      } else if (M == 2) {
        switch(d) {
        case 0:
          r++;
          break;

        case 1:
          c++;
          break;

        case 2:
          r--;
          break;

        case 3:
          c--;
          break;
        }
      }

      if (t == l) {
        d++;
        d %= 4;
        time++;
        t = 1;

        if (
          (time == 3 &&
          l == N) ||
          (time == 2 &&
          l != N)
        ) {
          l--;
          time = 0;
        }
      }
    }

    for (r = 0; r < N; r++) {
      for (c = 0; c < N; c++) {
        cout << setw(5) << arr[r][c];
      }

      cout << endl;
    }

    cout << endl;
  }
}
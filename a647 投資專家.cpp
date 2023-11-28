#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int a;

  while(cin >> a) {
    int b;
    int c;

    for (int i = 0 ; i < a ; i++) {
      cin >> b >> c;
      float d = ((float)c / (float)b - 1) * 100;

      if (d >= 0) {
        d += 0.00001;
      } else {
        d -= 0.00001;
      }

      if (
        d >= 10 ||
        d <= -7
      ) {
        cout << fixed << setprecision(2) << d << "\% dispose" << endl;
      } else {
        cout << fixed << setprecision(2) << d << "\% keep" << endl;
      }
    }
  }
}
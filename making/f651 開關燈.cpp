#include <iostream>

using namespace std;

int main() {
  int a;

  while(cin >> a) {
    for (int i = 0 ; i < 3 ; i++) {
      if ((a + i) % 3 == 0) {
        cout << (a + i) / 3 << "\n";
        break;
      }
    }
  }
}
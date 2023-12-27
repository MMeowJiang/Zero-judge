#include <iostream>

using namespace std;

int main() {
  int a;
  int b;

  while(cin >> a >> b) {
    if (a - b == 0) {
      b -= 3;
    }

    int c = 0;

    c = a - b;

    if (b < c) {
      cout << b << "+" << c << "=" << a << "\n";
    } else {
      cout << c << "+" << b << "=" << a << "\n";
    }
  }
}
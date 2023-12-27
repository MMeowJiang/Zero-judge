#include <iostream>

using namespace std;

int main() {
  double a;
  double b;
  double c = 0;
  double d = 0;

  while(cin >> a >> b) {
    c += a * b;
    d += b;
  }

  if (c / d >= 60) {
    cout << "Oh wow! You pass it!\n" << c / d;
  } else {
    cout << "YEEEEEE!!!";
  }
}
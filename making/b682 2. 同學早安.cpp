#include <iostream>

using namespace std;

int main() {
  int h1;
  int h2;
  int m1;
  int m2;

  cin >> h1 >> m1;
  cin >> h2 >> m2;

  int m3 = m2 - m1;
  int h3 = h2 - h1;

  if (m3 < 0) {
    m3 += 60;
    h3 -= 1;
  }

  if (h3 < 0) h3 += 24;

  cout << h3 << " " << m3;
}
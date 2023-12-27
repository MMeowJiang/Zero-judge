#include <iostream>

using namespace std;

int main() {
  string a;

  while(cin >> a) {
    long long b = 0;

    for (int i = 0 ; i < a.length() ; i++) {
      b += a[i] - '0';
    }

    if (b % 3 == 0) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}
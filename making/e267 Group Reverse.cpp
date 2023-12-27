#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n;

  while(cin >> n) {
    if (n == 0) break;

    string b;

    cin >> b;

    string c[b.length() / n];

    string d = "";

    for (int i = 0; i < b.length(); i++) {
      d += b[i];

      if ((i + 1) % n == 0) {
        c[i / n] = d;
        d = "";
      }
    }

    for (int i = 0; i < b.length() / n; i++) {
      string e = c[i];

      reverse(e.begin(), e.end());
      cout << e;
    }

    cout << "\n";
  }
}
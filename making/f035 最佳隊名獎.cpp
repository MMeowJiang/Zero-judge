#include <iostream>
#include <string>

using namespace std;

int main() {
  string a;
  int i = 0;

  getline(cin, a);

  for (char c : a) {
    cout << (int)c;

    if (i != a.length() - 1) {
      cout << "_";
    }

    i++;
  }
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int a;

  while(cin >> a) {
    vector <string> b;

    for (int i = 0 ; i < a ; i++) {
      string c;
      cin >> c;
      b.push_back(c);
    }

    sort(b.begin(), b.end());

    for (int i = 0 ; i  < a ; i++) {
      cout << b[i] << endl;
    }
  }
}
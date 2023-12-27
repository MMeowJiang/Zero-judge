#include <iostream>

using namespace std;

int main() {
  int n1 = 0;
  int n2 = 0;

  string s1;
  string s2;

  cin >> s1 >> s2;

  for (int i = 0 ; i < s1.size() ; i++) {
    n1 = n1 * 26 + s1[i] - 'A' + 1;
  }

  for (int i = 0 ; i < s2.size() ; i++) {
    n2 = n2 * 26 + s2[i] - 'A' + 1;
  }

  cout << n2 - n1 + 1 << "\n";
}
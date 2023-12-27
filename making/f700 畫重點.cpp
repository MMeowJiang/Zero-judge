#include <iostream>

using namespace std;

int main() {
  string a;

  getline(cin, a);
  cout << a << "\n";

  for (int i = 0 ; i < a.size() ; i++) {
    cout << "~";
  }
}
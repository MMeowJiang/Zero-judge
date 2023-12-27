#include <iostream>
#include <string>

using namespace std;

int main() {
  int a;
  int b;

  cin >> a;
  cin >> b;

  if (
    a % b == 0 || 
    to_string(a).find(to_string(b)) != string::npos
  ) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

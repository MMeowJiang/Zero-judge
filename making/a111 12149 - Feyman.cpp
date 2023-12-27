#include <iostream>
#include <cmath>

using namespace std;

long long power (int a, long long b) {
  if (a > 0) {
    power(a - 1, b + pow(a, 2));
  } else {
    return b;
  }
}

int main() {
  int a;

  while(cin >> a) {
    if (a == 0) {
      break;
    }
    
    cout << power(a, 0) << "\n";
  }
}
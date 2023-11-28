#include <iostream>

using namespace std;

int n;
int step[9] = {};
int check[9] = {};

void dfs(int now) {
  if (now == n + 1) {
    for (int i = 1; i <= n; i++) {
      cout << step[i];
    }

    cout << endl;
    return;
  }
  
  for (int i = n; i > 0; i--) {
    if (check[i] == 0) {
      step[now] = i;
      check[i] = 1;
      dfs(now + 1);
      check[i] = 0;
    }
  }
}

int main() {
  while(cin >> n) {
    dfs(1);
  }
}
#include <iostream>

using namespace std;

int main() {
  long long h;
  long long m;
  long long s;
  string s1 = "";
  string s2 = "";
  string s3 = "";

  cin >> h >> m >> s;

  if (s > 59) {
    m += s / 60;
    s %= 60;
  }

  if (m > 59) {
    h += m / 60;
    m %= 60;
  }

  if (h > 23) {
    h %= 24;
  }

  if (h < 10) {
    s1 = "0";
  }

  if (m < 10) {
    s2 = "0";
  }

  if (s < 10) {
    s3 = "0";
  }
  
  cout << s1 << h << ":" << s2 << m << ":" << s3 << s;
}
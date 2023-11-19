#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector< pair< int, int > >tmp;

    for (int i = 2 ; i < 1e9 ; i++) {
        if (n == 1) {
            break;
        }

        int cnt = 0;

        while(!(n % i)) {
            cnt++;
            n /= i;
        }

        if (cnt) {
            tmp.push_back({
                i,
                cnt
            });
        }
    }

    for (int i = 0 ; i < tmp.size(); i++) {
        if (i) {
            cout << " * ";
        }

        int n = tmp[i].first;
        int cnt = tmp[i].second;

        if (cnt > 1) {
            cout << n << "^" << cnt;
        } else {
            cout << n;
        }
    }

    cout << "\n";
}
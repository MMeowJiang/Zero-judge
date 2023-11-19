#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int a;
        int b;
        int c;
        int d;
        int ans;
        cin >> a >> b >> c >> d;

        if (
            (b - a) == (c - b) &&
            (c - b) == (d - c)
        ) {
            ans = d + (d - c);
        } else {
            ans = d * (d / c);
        }

        cout<< a << " " << b << " " << c << " " << d << " " << ans << endl;
    }
}
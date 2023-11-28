#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;

    if (d < 0) {
        cout << "No real root";
    } else if (d == 0) { 
        double ans = (-b) / (2 * a);

        cout << "Two same roots x=" << ans;
    } else {
        double ans1 = (-b + sqrt(d)) / (2 * a);
        double ans2 = (-b - sqrt(d)) / (2 * a);

        cout << "Two different roots x1=" << ans1 << " , x2=" << ans2;
    }
}
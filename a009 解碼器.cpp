#include <iostream>
using namespace std;

int main() {
    char s[1000];
    fgets(s, 1001, stdin);

    for (char &c : s) {
        if (c == '\n') {
            break;
        }

        c -= 7;
    }

    cout << s;
}
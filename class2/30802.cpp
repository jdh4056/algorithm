#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;
        if (a == 0 | b == 0 | c == 0) {
            break;
        }
        int MAX = 0, w = 0, h = 0;
        if (a > b && a > c) {
            MAX = a;
            w = b;
            h = c;
        } else if (b > a && b > c) {
            MAX = b;
            w = a;
            h = c;
        } else if (c > a && c > b) {
            MAX = c;
            w = a;
            h = b;
        }
        if ((w*w) + (h*h) == (MAX*MAX)) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
}
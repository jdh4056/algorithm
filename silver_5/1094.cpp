#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;
    int sum = 0;
    int stick = 64;
    int cnt = 0;

    while (true) {
        if (x == sum) {
            cout << cnt;
            break;
        }


        if (sum > x) {
            stick /= 2;
            if (stick >= x)
        }
    }
}

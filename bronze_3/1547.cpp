#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    int ball = 1;

    while (m--) {
        int x,y;
        cin >> x >> y;

        if (x == ball){
            ball = y;
        } else if (y == ball) {
            ball = x;
        }
    }
    cout << ball;
}
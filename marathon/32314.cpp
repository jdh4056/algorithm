#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int w,v;
    cin >> a;
    cin >> w >> v;
    if ((w/v) >= a) {
        cout << 1;
    } else {
        cout << 0;
    }
}
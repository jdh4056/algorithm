#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,w,m;
    cin >> k >> w >> m;
    int a = w - k;
    int cnt = 0;
    while (k < w) {
        k += m;
        cnt++;
    }
    cout << cnt;
}
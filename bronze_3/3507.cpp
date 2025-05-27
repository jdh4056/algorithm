#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i <= 99; i++) {
        int last = n - i;
        if (last >= 0 && last <= 99) cnt++;
    }
    cout << cnt;
}
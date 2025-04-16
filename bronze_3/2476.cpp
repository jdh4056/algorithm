#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int mx = 0;
    while (n--) {
        int sum = 0;

        int a,b,c;
        cin >> a >> b>> c;
        int d;
        int cnt = 0;
        if (a == b && b == c) {
            cnt = 2;
        } else if (a == b || a == c) {
            d = a;
            cnt = 1;
        } else if (b == c) {
            d = b;
            cnt = 1;
        }

        if (cnt == 0) {
            int max_val = max({a,b,c});
            sum += max_val*100;
        } else if (cnt == 1) {
            sum += (1000+d*100);
        } else if (cnt == 2) {
            sum += (10000+a*1000);
        }
        mx = max(mx, sum);
    }
    cout << mx;
}
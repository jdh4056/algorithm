#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int s, n;
        cin >> s >> n;
        int sum = 0;
        sum += s;
        while (n--) {
            int q,p;
            cin >> q >> p;
            sum += (q * p);
        }
        cout << sum << '\n';
    }
}
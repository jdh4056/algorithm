#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while (t--) {
        int n,m,x,y;
        cin >> m >> n >> x >> y;

        int cntx = 0;
        int cnty = 0;
        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {
                if (y < n) cnty++;
                if (cnty == y) break;
            }
            if (x < m) cntx++;
            if (cntx == x) cout << cntx + cnty << '\n';
        }
    }
}
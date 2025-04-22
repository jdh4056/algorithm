#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cntA = 0, cntB = 0;
    for (int i = 0; i<n;i++) {
        int a,b;
        cin >> a>> b;
        if (a > b) cntA++;
        else if (a < b) cntB++;
    }

    cout << cntA <<" " << cntB;
}
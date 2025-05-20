#include<bits/stdc++.h>
using namespace std;

int main() {
    int l,a,b,c,d;
    cin >> l >> a >> b>>c>>d;

    int aCnt = 0;
    int i = 0;
    for (i = c; i <= a; i+=c) {
        if (i >= a) break;
        else aCnt++;
    }
    if (i != 0) aCnt++;

    int bCnt = 0;
    int j = 0;
    for (j = d; j <= b; j+=d) {
        if (j >= b) break;
        else bCnt++;
    }
    if (j != 0) bCnt++;

    cout << l - max(aCnt, bCnt);
}
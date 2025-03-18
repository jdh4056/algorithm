#include<bits/stdc++.h>
using namespace std;

int main() {
    int mx = 0;
    int mxIndex = 0;
    for (int i = 0; i < 5; ++i) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (mx < a+b+c+d) mxIndex = i+1;
        mx = max(mx, a + b + c + d);
    }
    cout << mxIndex << " " << mx;
}
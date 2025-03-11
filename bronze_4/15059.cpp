#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    int d,e,f;
    cin >> a>>b>>c;
    cin >>d>>e>>f;
    int res = 0;
    if (a<d) res += (d-a);
    if (b<e) res += (e-b);
    if (c<f) res += (f-c);
    cout << res;
}
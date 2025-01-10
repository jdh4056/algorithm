#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c>> d;
    cin >> e >> f >> g >> h;
    int min = a + b + c + d;
    int man = e + f + g +h;
    cout << max(min, man);
}
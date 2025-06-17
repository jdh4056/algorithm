#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >>d;

    int mn1 = b + c;
    int mn2 = a + d;
    cout << min(mn1, mn2);
}
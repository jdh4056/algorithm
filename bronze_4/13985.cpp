#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    char op1, op2;

    cin >> a >> op1 >> b >> op2 >> c;
    int res = 0;
    res = a + b;
    if (res == c) cout << "YES";
    else cout << "NO";
}
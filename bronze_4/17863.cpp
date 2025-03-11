#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    int s = 0;
    for (int i = 0; i < 3; ++i) {
        if (a[i] == '5') s++;
    }
    if (s == 3) cout << "YES";
    else cout << "NO";
}
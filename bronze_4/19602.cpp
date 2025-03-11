#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,m,l;
    cin >> s >> m >> l;

    int res = s+(m*2)+(l*3);
    if (res >= 10) cout << "happy";
    else cout << "sad";
}
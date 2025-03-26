#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    int idx[10] = {};


    int res = a * b * c;
    string int2str = to_string(res);

    for (int i = 0; i < int2str.size(); ++i) {
        idx[int2str[i] - '0']++;
    }

    for (int i = 0; i < 10; ++i) cout << idx[i] << '\n';
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    vector<int> idx(80);
    for (int i = 1; i<=s1;i++) {
        for (int j = 1; j<=s2;j++) {
            for (int k = 1; k<=s3;k++) {
                int sum = i + j + k;
                idx[sum]++;
            }
        }
    }

    int mx = 0;
    int mn = 0;
    for (int i = 0; i < idx.size(); i++) {
        if (idx[i] > mx) {
            mx = idx[i];
            mn = i;
        } else if (idx[i] == mx) {
            mn = min(mn, i);
        }
    }

    cout << mn;
}
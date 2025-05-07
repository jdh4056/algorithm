#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string a; cin>> a;
        int cnt = 0;

        for (int i = 0; i<a.size();i++) {
            cnt++;
            for (int j = i+1; j<a.size();j++) {
                if (a[i] == a[j]) {
                    cnt--;
                    break;
                }
            }
        }

        cout << cnt << '\n';
    }
}
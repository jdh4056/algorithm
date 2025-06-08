#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string n;
        getline(cin, n);
        stringstream ss(n);
        int num, res = 0;
        while (ss >> num) {
            res += num;
        }
        cout << res << '\n';
    }
}
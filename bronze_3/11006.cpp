#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int leftLeg = (m*2) - n;
        cout << leftLeg << " " << m - leftLeg << '\n';
    }
}
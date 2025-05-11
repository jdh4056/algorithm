#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt =0;
    for (int b = 1; b<=500; b++) {
        for (int a = 1; a <=500; a++) {
            if ((a*a) - (b*b) == n) cnt++;
        }
    }
    cout << cnt;
}
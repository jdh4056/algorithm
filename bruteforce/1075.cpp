#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,f;
    cin >> n >> f;
    int res = (n/100)*100;
    for (int i = 0; i<100; i++) {
        if ((i + res) % f == 0) {
            (i < 10) ? cout << 0 << i : cout << i;
            break;
        }
    }
}
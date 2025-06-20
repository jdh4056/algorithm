#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;

    int k = 1;
    while (k * k <= n) {
        k++;
    }
    cout << "The largest square has side length " << k-1 <<".";
}
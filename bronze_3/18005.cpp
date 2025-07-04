#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if (n%2 != 0) cout << 0;
    else {
        if ((n/2) % 2 == 0) cout << 2;
        else cout << 1;
    }
}
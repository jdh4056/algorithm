#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    if (a == b) {
        if (a == 0 && b == 0) cout << "Not a moose";
        else  cout << "Even " << a*2;
    } else {
        int mx = max(a,b);
        cout << "Odd "  << mx * 2;
    }

}

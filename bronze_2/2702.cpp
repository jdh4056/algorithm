#include<iostream>
using namespace std;

int gcd(int a,int b) {
    if (a==0) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        cout << lcm(a,b) << " " << gcd(a,b) << '\n';
    }
}
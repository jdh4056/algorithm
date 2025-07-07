#include<iostream>
using namespace std;

int main() {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        int a2b = abs(a-b);

        int c1 = a - a2b;
        int c2 = b + a2b;
        cout << min(c1, c2) << '\n';
    }
}
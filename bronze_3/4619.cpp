#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int b,n;
        cin >> b >> n;

        if (b == 0 && n == 0) break;

        double  bb = pow(b, 1.0/n);
        int a = round(bb);

        int a1 = abs(pow(a-1, n) - b);
        int a2 = abs(pow(a, n) - b);
        int a3 = abs(pow(a+1, n) - b);
        ;
        if (a1 > a2) cout << a << '\n';
        else if (a1 >a3) cout << a+1 << '\n';
        else cout << a-1 << '\n';
    }

}

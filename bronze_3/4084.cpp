#include<bits/stdc++.h>
using namespace std;
int abss(int x, int y) {
    return abs(x-y);
}
int main() {

    while (true) {
        int a,b,c,d;
        cin >> a >> b >> c>> d;
        int cnt = 0;
        if (a ==0&&b==0&&c==0&&d==0) break;

        while (!(a == b && b== c&&c== d)) {
            int aa = abs(a-b);
            int bb = abs(b-c);
            int cc = abs(c-d);
            int dd = abs(d-a);

            a = aa;
            b = bb;
            c = cc;
            d = dd;

            cnt++;
        }
        cout << cnt << '\n';
    }

}
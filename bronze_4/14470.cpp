#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a >> b>> c>>d>>e;

    int res = 0;
    if (a < 0) {
        res += abs(a)*c;
        res += d;
        a = 0;
        res += (b-a)*e;
    } else {
        res += (b-a)*e;
    }


    cout << res;
}
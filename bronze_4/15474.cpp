#include<iostream>
using namespace std;

int main() {
    int n,a,b,c,d;
    cin >> n >> a >> b >> c>> d;

    int res = 0;
    int acnt = n / a;
    int ccnt = n / c;
     if (n % a != 0) acnt++;
     if (n % c != 0) ccnt++;

    res = min ((b*acnt), (d*ccnt));

    cout << res;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double d,ratio_h,ratio_w;
    cin >> d >> ratio_h >> ratio_w;

    double r = ratio_w / ratio_h;

    double h = d / sqrt(r*r+1);
    double w = r * h;

    cout << floor(h) << " " << floor(w);
}
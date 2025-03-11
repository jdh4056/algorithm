#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y,w,h;
    cin >> x >> y >> w >> h;

    /*
    x->0
    x->w
    y->0
    y->h
    */

    int x_w = w - x;
    int y_h = h - y;

    cout << min(min(x,y), min(x_w,y_h));
}
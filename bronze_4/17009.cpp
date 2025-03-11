#include <bits/stdc++.h>
using namespace std;

int main() {
    int a =0;
    int b = 0;


        int s1;
        cin >> s1;
        a += 3*s1;
        int s2;
        cin >> s2;
        a += 2*s2;
        int s3;
        cin >> s3;
        a += s3;


        int d1;
        cin >> d1;
        b += 3*d1;
        int d2;
        cin >> d2;
        b += 2*d2;
        int d3;
        cin >> d3;
        b += d3;


    if (a > b) cout << "A";
    else if (a < b) cout << "B";
    else if (a == b) cout << "T";
}
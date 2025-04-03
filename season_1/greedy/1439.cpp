#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int zeroGroup = 0;
    int oneGroup = 0;

    if (str[0] == '0') {
        zeroGroup++;
    } else {
        oneGroup++;
    }

    for (int i = 1; i < str.length(); ++i) {
        if (str[i-1] != str[i]) {
            if (str[i] == '0') {
                zeroGroup++;
            } else {
                oneGroup++;
            }
        }
    }

    if (zeroGroup < oneGroup) {
        cout << zeroGroup;
    } else {
        cout << oneGroup;
    }
}
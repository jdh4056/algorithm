#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        string str;
        getline(cin, str);
        if (str == "***") break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin, n);
    stringstream ss(n);
    int num, res = 0;
    while (ss >> num) {
        res += num;
    }
    cout << res;
}
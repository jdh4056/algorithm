#include <bits/stdc++.h>
using namespace std;

int main() {
    while(true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        string str = to_string(n);
        reverse(str.begin(), str.end());
        int reversN = stoi(str);

        if (n == reversN) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
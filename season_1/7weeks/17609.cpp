#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;
        string reStr = str;
        reverse(reStr.begin(), reStr.end());

        if (str == reStr) {
            cout << 0;
            return 0;
        }

        int left = 0;
        int right = str.size() - 1;

        while (left < right) {
            if (str[left] != str[right]) {

            }
        }
    }
}
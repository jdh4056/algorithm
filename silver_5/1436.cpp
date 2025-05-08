#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int num = 666;
    int cnt = 0;

    while (true) {
        string s = to_string(num);
        if (s.find("666") != string::npos) {
            cnt++;
            if (cnt == n) {
                cout << s;
                break;
            }
        }
        num++;
    }
}

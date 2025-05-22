#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    bool check = false;
    string n = "";

    int res = 0;
    for (int i =0; i<=s.size();i++) {
        if (s[i] == '+'||s[i]=='-'||s[i]=='\0') {
            if (check) res -= stoi(n);
            else res += stoi(n);

            n = "";
            if (s[i]=='-') check = true;
        } else {
            n += s[i];
        }
    }

    cout << res;
}
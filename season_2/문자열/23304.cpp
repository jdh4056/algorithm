#include<bits/stdc++.h>
using namespace std;

bool akaraka(string s) {
    if (s.length() == 1) return true;

    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    if (s != rev_s) return false;

    int length = s.length() / 2;
    string front = s.substr(0, length);
    string end = s.substr(s.length() - length);

    return akaraka(front) && akaraka(end);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;

    if (akaraka(s)) cout << "AKARAKA";
    else cout << "IPSELENTI";


}
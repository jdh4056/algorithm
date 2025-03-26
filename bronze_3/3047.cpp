#include <bits/stdc++.h>
using namespace std;

int main() {
    int q,w,e;
    cin>>q>>w>>e;
    int a = min (q, min(w,e));
    int c = max (q, max(w,e));
    int b = max(min(q,w), min(max(q,w), e));

    string s;
    cin>>s;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'A') cout << a;
        else if (s[i] == 'B') cout << b;
        else if (s[i] == 'C') cout << c;
        cout << ' ';
    }
}
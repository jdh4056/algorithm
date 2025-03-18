#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int k;
    cin >> k;
    while (k--) {
        int a;
        cin >> a;
        if (a == 0) {
            s.pop();
        } else {
            s.push(a);
        }
    }

    int sum = 0;
/*
    for (int i = 0; i < s.size(); ++i) {
        //cout << s.size() << endl;
        sum += s.top();
        //cout << s.top() << endl;
        s.pop();
        //cout << s.top() << endl;
    }
    for문으로 s.size()로 범위를 지정하면 pop을 할때마다 s.size()값이 달라져버림
    */

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}
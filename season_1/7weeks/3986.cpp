#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count = 0;

    while (N--) {
        string word;
        cin >> word;
        stack<char> s;

        for (char c : word) {
            if (!s.empty() && s.top() == c) {
                s.pop();
            } else {
                s.push(c);
            }
        }

        if (s.empty()) {
            count++;
        }
    }

    cout << count;
}
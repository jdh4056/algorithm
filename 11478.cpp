#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<string> diffStr;

    for (int i = 0; i < S.size(); ++i) {
        for (int j = 1; j <= S.size() - i; ++j) {
            string str;
            str = S.substr(i, j);
            diffStr.push_back(str);
        }
    }

    sort(diffStr.begin(), diffStr.end());
    diffStr.erase(unique(diffStr.begin(), diffStr.end()), diffStr.end());

    cout << diffStr.size();
}
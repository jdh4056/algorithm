#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(26,0);
    vector<char> res;
    while (n--) {
        string s; cin >> s;
        v[s[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] >= 5) res.push_back('a'+i);
    }
    if (res.empty()) {
        cout << "PREDAJA";
        return 0;
    } else {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i];
        }
    }

}
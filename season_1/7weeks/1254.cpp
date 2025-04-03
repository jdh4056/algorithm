#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string reStr = str;
    reverse(reStr.begin(), reStr.end());

    if (reStr == str) {
        cout << str.size();
        return 0;
    }


    for (int i = 0; i < str.length(); ++i) {
        if (str.substr(i) == reStr.substr(0, str.length() - i)) {
            string palindrome = str + reStr.substr(str.length() - i);
            cout << palindrome.size();
            return 0;
        }
    }

    string palindrome = str + reStr.substr(1);
    cout << palindrome.size();
}
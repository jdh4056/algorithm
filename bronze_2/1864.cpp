#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        string str; cin >> str;
        if (str == "#") break;
        vector<int> v;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '-') v.push_back(0);
            else if (str[i] == '\\')  v.push_back(1);
            else if (str[i] == '(')  v.push_back(2);
            else if (str[i] == '@')  v.push_back(3);
            else if (str[i] == '?')  v.push_back(4);
            else if (str[i] == '>')  v.push_back(5);
            else if (str[i] == '&')  v.push_back(6);
            else if (str[i] == '%')  v.push_back(7);
            else if (str[i] == '/')  v.push_back(-1);
        }

        int sum = 0;
        int size = v.size();
        for (int i = 0; i < v.size(); i++) {
            if (size == 0) sum += v[i];
            else {
                int res = 1;
                for (int j = 0; j < size - 1; j++) {
                    res *= 8;
                }
                sum += (res*v[i]);
                size--;
            }
        }
        cout << sum << '\n';
    }
}
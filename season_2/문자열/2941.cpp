#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt = 0;
    int i = 0;
    while (i < str.length()) {
        if (i + 2 < str.length() && str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') {
            cnt++;
            i += 3;
        }
        else if (i + 1 < str.length()) {
            if ((str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) ||
                (str[i] == 'd' && str[i+1] == '-') ||
                (str[i] == 'l' && str[i+1] == 'j') ||
                (str[i] == 'n' && str[i+1] == 'j') ||
                (str[i] == 's' && str[i+1] == '=') ||
                (str[i] == 'z' && str[i+1] == '=')) {
                cnt++;
                i += 2;
                } else {
                    cnt++;
                    i++;
                }
        }
        else {
            cnt++;
            i++;
        }
    }

    cout << cnt;
}
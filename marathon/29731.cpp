#include <bits/stdc++.h>
using namespace std;

int main() {
    string strArr[7] = { "Never gonna give you up","Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop"};
    int N;
    string str;
    cin >> N;
    cin.ignore();

    int i;
    while(N--) {
        getline(cin, str);
        for (i = 0; i < 7; i++) {
            if (str == strArr[i]) {
                break;
            }
        }
        if (i == 7) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
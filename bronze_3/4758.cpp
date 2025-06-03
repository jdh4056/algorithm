#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        double a;
        int b,c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        vector<string> v;
        if (a <= 4.5 && b >= 150 && c >= 200) {
            v.push_back("Wide Receiver");
        }
        if (a <= 6.0 && b >= 300 && c >= 500) {
            v.push_back("Lineman");
        }
        if (a <= 5.0 && b >= 200 && c >= 300) {
            v.push_back("Quarterback");
        }

        if (v.empty()) cout << "No positions";
        else {
            for (int i = 0; i < v.size(); i++) {
                if (i > 0) cout << " ";
                cout << v[i];
            }
        }
        cout << '\n';
    }
}
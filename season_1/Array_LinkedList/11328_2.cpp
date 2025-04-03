#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string a,b;
        cin >> a;
        cin.ignore();
        cin >> b;

        int as = a.size();
        bool check[as];
        bool ch = true;


        for (int i = 0; i < a.size(); ++i) {
            for (int j = 0; j < b.size(); ++j) {
                if (a[i] == b[j]) {
                    b.erase(j,1);
                    check[i] = true;
                    break;
                }
            }
        }

        for (int i = 0; i < as; ++i) if (check[i] == false) ch = false;

        if (ch) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }

}
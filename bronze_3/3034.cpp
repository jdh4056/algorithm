#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,w,h;
    cin >> n >> w >> h;
    int a = sqrt(pow(w,2)+pow(h,2));

    while (n--) {
        int s;
        cin >> s;
        if (s <= a) cout << "DA" <<'\n';
        else cout << "NE" <<'\n';
    }
}
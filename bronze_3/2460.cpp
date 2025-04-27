#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<int, int> > v;

    int mx =0;
    for (int i = 0; i < 10; i++) {
        int in, out; cin>> in >> out;
        v.push_back({in, out});
    }

    int riding = 0;
    for (int i =0; i < 10; i++) {
        riding = riding - v[i].first + v[i].second;
        //cout << riding << "\n";
        mx = max(mx, riding);
    }
    cout << mx;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int f,m,s;
    cin >> f >> m >> s;
    vector<int> vec {f,m,s};

    sort(vec.begin(), vec.end());

    cout << vec[1];
}
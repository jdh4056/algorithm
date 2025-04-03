#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string str = to_string(N);
    vector<int> index;
    for (int i = 0; i < str.size(); ++i) {
        index[str[i] - '0']++;
    }
    int count = 0;



}
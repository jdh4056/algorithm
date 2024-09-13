#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> roomNum(N);

    for (int i = 0; i < roomNum.size(); ++i) {
        int num;
        cin >> num;
        roomNum.push_back(num);
    }

    for (int i = 0; i < roomNum.size(); ++i) {
        cout << roomNum.front();
        roomNum.pop_back();
    }
}
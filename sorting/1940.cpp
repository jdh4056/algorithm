#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    cin >> M;
    vector<int> arr;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int count = 0;
    unordered_map<int, int> materials;
    for (int i = 0; i < N; ++i) {
        int target = M - arr[i];
        if (materials.find(target) != materials.end()) {
            count++;
            materials.erase(target);
        } else {
            materials[arr[i]] = i;
        }
    }

    cout << count;
}
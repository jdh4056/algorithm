#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> jewels(N);
    vector<int> bags(K);


    for (int i = 0; i < N; i++) {
        int weight, value;
        cin >> weight >> value;
        jewels[i] = {weight, value};
    }


    for (int i = 0; i < K; i++) {
        cin >> bags[i];
    }


    sort(jewels.begin(), jewels.end());
    sort(bags.begin(), bags.end());

    priority_queue<int> availableJewels;
    long long maxProfit = 0;
    int jewelIndex = 0;


    for (int bagWeight : bags) {

        while (jewelIndex < N && jewels[jewelIndex].first <= bagWeight) {
            availableJewels.push(jewels[jewelIndex].second);
            jewelIndex++;
        }


        if (!availableJewels.empty()) {
            maxProfit += availableJewels.top();
            availableJewels.pop();
        }
    }

    cout << maxProfit << '\n';


}

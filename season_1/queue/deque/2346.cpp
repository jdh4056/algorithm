#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> balloon;
    deque<int> nums;
    int N;
    cin >> N;
    vector<int> paper(N);
    for (int i = 0; i < N; ++i) {
        cin >> paper[i];
    }
    for (int i = 0; i < N; i++) {
        balloon.push_back(i + 1);
        nums.push_back(paper[i]);
    }

    vector<int> result;

    while(!balloon.empty()){
        int index = balloon.front();
        int num = nums.front();
        balloon.pop_front();
        nums.pop_front();
        result.push_back(index);

        if (balloon.empty()) {
            break;
        }

        if (num > 0) {
            for (int i = 0; i < num-1; ++i) {
                balloon.push_back(balloon.front());
                nums.push_back(nums.front());
                balloon.pop_front();
                nums.pop_front();
            }
        } else {
            for (int i = 0; i < -num; ++i) {
                balloon.push_front(balloon.back());
                nums.push_front(nums.back());
                balloon.pop_back();
                nums.pop_back();
            }
        }
    }

    for (int i : result) {
        cout << i << " ";
    }
}
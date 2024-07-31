#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> currentLine;
    stack<int> oneLine;
    int N;
    bool b = true;
    int student;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> student;
        currentLine.push(student);
    }

    int num = 1;
    while(!currentLine.empty() && !oneLine.empty()) {
        if (!currentLine.empty() && currentLine.front() == num) {
            currentLine.pop();
            num++;
        } else {
            oneLine.push(currentLine.front());
            currentLine.pop();
            if (!oneLine.empty() && oneLine.top() == num) {
                oneLine.pop();
                num++;
            } else {
                return false;
            }
        }
    }

    if (b) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }
}

#include<iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int count = 0;
    int i = 0, j = 0;
    while (i < A.size() && j < B.size()) {
        if (A[i] == B[j]) {
            count++;
            i++;
            j++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << (A.size() - count) + (B.size() - count);
}
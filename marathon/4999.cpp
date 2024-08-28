#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    string doctor;
    cin >> str >> doctor;

    if (str.size() >= doctor.size()) {
        cout << "go";
    } else {
        cout << "no";
    }
}
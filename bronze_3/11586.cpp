#include<iostream>
#include<string>
using namespace std;

int main() {
    int n; cin >> n;
    string mirror[n];
    for (int i = 0; i < n;i++) {
        cin >> mirror[i];
    }
    int k; cin>>k;
    if (k == 1) {
        for (int i = 0; i < n;i++) {
            cout << mirror[i] << '\n';
        }
    } else if (k == 2) {
        for (int i = 0; i < n; i++) {
            for (int j = n-1;j>=0;j--) {
                cout << mirror[i][j];
            }
            cout << '\n';
        }
    } else if (k == 3) {
        for (int i = n-1;i>=0;i--) {
            for (int j = 0;j< n;j++) {
                cout << mirror[i][j];
            }
            cout << '\n';
        }
    }

}
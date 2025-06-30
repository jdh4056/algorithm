#include<iostream>
#include<string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string str; cin >> str;
        str.erase(n-1,1);
        cout << str << '\n';
    }


}
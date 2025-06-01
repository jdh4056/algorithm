#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int d,n,s,p;
        cin >> d>> n >> s>> p;

        int par = d + (n*p);
        int notpar = n*s;

        if (par > notpar) cout << "do not parallelize\n";
        else if (par < notpar) cout << "parallelize\n";
        else cout << "does not matter\n";
    }
}
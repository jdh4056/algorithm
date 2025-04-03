#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, string> site;
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        string name, password;
        cin >> name >> password;
        site.insert(make_pair(name, password));
    }

    for (int i = 0; i < M; ++i) {
        string password;
        cin >> password;
        cout << site.find(password)->second << endl;
    }
}
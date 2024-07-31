#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<string, string> semina;

    semina["Algorithm"] = "204";
    semina["DataAnalysis"] = "207";
    semina["ArtificialIntelligence"] = "302";
    semina["CyberSecurity"] = "B101";
    semina["Network"] = "303";
    semina["Startup"] = "501";
    semina["TestStrategy"] = "105";

    for (int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        if (semina.find(str) != semina.end()) {
            cout << semina[str] << '\n';
        }
    }
}
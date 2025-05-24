#include<bits/stdc++.h>
using namespace std;

int main() {
    int an, eye;
    cin >> an >> eye;

    if (an >= 3 && eye <= 4) cout << "TroyMartian\n";
    if (an <= 6 && eye >= 2) cout << "VladSaturnian\n";
    if (an <= 2 && eye <= 3) cout << "GraemeMercurian\n";
}
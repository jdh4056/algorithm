#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    while (n--) {
        string str;
        cin >> str;

        int front = 0;
        int size= str.size() - 5;
        for (int i = 0; i < size; i++) {
            int sq = (int)str[i] - 65;
            front += (sq * (int)pow(26, (size-1) -i));
        }

        //string backNum;
        /*for (int i = 4; i < str.size(); i++){
            backNum[i] = str[i];
        }*/
        string backNum = str.substr(4);
        int back = stoi(backNum);

        int res = abs(front - back);
        if (res <= 100) cout << "nice" << '\n';
        else cout << "not nice" << '\n';
    }
}
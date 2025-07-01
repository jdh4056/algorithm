#include<iostream>
using namespace std;

int pal1(string s) {
    int left = 0; int right = s.length() - 1;
    int cnt1 = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            s[left] = s[right];
            cnt1++;
        }
        left++; right--;
    }
    return cnt1;
}

int pal2(string s) {
    int left = 0; int right = s.length() - 1;
    int cnt2 = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            s[right] = s[left];
            cnt2++;
        }
        left++; right--;
    }
    return cnt2;
}


int main() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt1 = pal1(s);
    int cnt2 = pal2(s);
    cout << min(cnt1,cnt2);
}
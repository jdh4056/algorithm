#include <bits/stdc++.h>
using namespace std;
int day[17];
int pay[17];
int profit[17];

int main(){
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> day[i] >> pay[i];
    }

    for (int i = N; i >= 1; i--){
        if (i + day[i] <= N + 1){
            profit[i] = max(profit[i + day[i]] + pay[i], profit[i + 1]);
        } else {
            profit[i] = profit[i + 1];
        }
    }

    cout << *max_element(profit, profit + N + 1);
}
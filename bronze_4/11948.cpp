#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    int e,f;
    cin >> a >> b >> c>>d>>e>>f;
    int min1 = min({a,b,c,d});
    int max2 = max(e,f);
    int sum =  (a+b+c+d - min1) + max2;
    cout << sum;
}
#include <bits/stdc++.h>
using namespace std;

struct Person {
    string name;
    int dd;
    int mm;
    int yyyy;

};
int main() {
    int n;
    cin >> n;

    vector<Person> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i].name >> arr[i].dd >> arr[i].mm >> arr[i].yyyy;
    }

    sort(arr.begin(), arr.end(),
        [](Person a, Person b) {
            if (a.yyyy != b.yyyy) {
                return a.yyyy < b.yyyy;
            }
            if (a.mm != b.mm) {
                return a.mm < b.mm;
            }
    return a.dd < b.dd;
    });

    Person old = arr.front();
    Person young = arr.back();

    cout << young.name << '\n';
    cout << old.name << '\n';
}
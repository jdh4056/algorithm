#include <bits/stdc++.h>
using namespace std;

struct Person {
    int age;
    string name;
};

bool compare(const Person &a, const Person &b) {
    return a.age < b.age;
}

int main() {
    int N;
    cin >> N;

    vector<Person> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i].age >> arr[i].name;
    }

    stable_sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < N; ++i) {
        cout << arr[i].age << " " << arr[i].name << endl;;
    }
}
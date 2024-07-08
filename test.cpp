#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> st;

    st.push(1);
    st.push(2);
    st.push(3);


    cout << st.size() << endl;

    st.pop();

    cout << st.size() << endl;
}
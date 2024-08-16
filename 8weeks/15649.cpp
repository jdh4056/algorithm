#include<bits/stdc++.h>
using namespace  std;
#define MAX 9
int N,M;
int arr[MAX];
bool visited[MAX];

void dfs(int depth) {
    if (depth == M) {
        for (int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1);
            visited[i] = false;
        }
    }
}
int main() {
    cin >> N >> M;
    dfs(0);
}
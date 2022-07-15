#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

vector<int> ans;
int cnt = 1;

void f(int x) {
    vis[x] = true;
    ans[x] = cnt++;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=N; i++)
        sort(adj[i].begin(), adj[i].end());

    vis.resize(N+1, false);
    ans.resize(N+1);

    f(K);

    for(int i=1; i<=N; i++) cout << ans[i] << "\n";
}

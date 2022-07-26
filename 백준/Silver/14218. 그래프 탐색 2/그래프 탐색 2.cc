#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj;
    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int K; cin >> K;

    while(K--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);

        vector<int> dis(N+1, -1);
        dis[1] = 0;

        queue<int> q;
        q.push(1);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i];

                if(dis[y] != -1) continue;

                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }

        for(int i=1; i<=N; i++) cout << dis[i] << " ";
        cout << "\n";
    }
}

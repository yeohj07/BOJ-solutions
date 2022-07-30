#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> adj(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int M; cin >> M;

    while(M--) {
        int Q, x; cin >> Q >> x;

        if(Q == 1) {
            if(adj[x].size() >= 2) cout << "yes\n";
            else cout << "no\n";
        }
        else if(Q == 2) cout << "yes\n";
    }
}

#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

bool cmp(s x, s y) { return x.c < y.c; }

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> adj;

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        adj.push_back({a, b, c});
    }

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        adj.push_back({0, i, x});
    }

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=0; i<=N; i++) v[i] = i;

    int ans = 0, cnt = 0;

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        if(cnt == N) break;
    }

    cout << ans << "\n";
}

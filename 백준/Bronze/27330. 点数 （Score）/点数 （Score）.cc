#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    vector<bool> u(1001);
    for(int i=0; i<M; i++) {
        int x; cin >> x;

        u[x] = true;
    }

    int ans = 0;

    for(int i=0; i<N; i++) {
        ans += v[i];

        if(u[ans]) ans = 0;
    }

    cout << ans << "\n";
}

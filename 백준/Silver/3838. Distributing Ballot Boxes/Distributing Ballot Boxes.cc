#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == -1 && M == -1) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int l = 1, r = 1e9, ans = 1e9;

        while(l <= r) {
            int m = (l + r) / 2, sum = 0;

            for(int i=0; i<N; i++) sum += (v[i] - 1) / m + 1;

            if(sum <= M) {
                ans = min(ans, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << "\n";
    }
}

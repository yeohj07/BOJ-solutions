#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int sum = 0;

    while(M--) {
        int x; cin >> x;

        sum += x;
    }

    if(sum >= N) cout << "Padaeng_i Happy\n";
    else cout << "Padaeng_i Cry\n";
}

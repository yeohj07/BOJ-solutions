#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mx = 0, cur = 0;

    while(n--) {
        int a, b; cin >> a >> b;

        cur = cur - a + b;

        mx = max(mx, cur);
    }

    cout << mx << "\n";
}

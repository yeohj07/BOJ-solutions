#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        cout << a << " " << b << "\n";
        cout << a * b - (a - 1) * 2 << "\n";
    }
}

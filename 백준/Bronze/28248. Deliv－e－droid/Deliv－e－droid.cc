#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    cout << (a > b) * 500 + a * 50 - b * 10 << "\n";
}

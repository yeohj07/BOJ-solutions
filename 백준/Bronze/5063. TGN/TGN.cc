#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        if(a < b - c) cout << "advertise\n";
        else if(a > b - c) cout << "do not advertise\n";
        else cout << "does not matter\n";
    }
}

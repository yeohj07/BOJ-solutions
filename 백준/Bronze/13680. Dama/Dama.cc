#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;

        if(x1 == x2 && y1 == y2) cout << 0 << "\n";
        else if(x1 == x2 || y1 == y2) cout << 1 << "\n";
        else if(x1 + y1 == x2 + y2 || x1 - y1 == x2 - y2) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
}

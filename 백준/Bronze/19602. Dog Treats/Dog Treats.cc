#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if(a + b*2 + c*3 >= 10) cout << "happy\n";
    else cout << "sad\n";
}

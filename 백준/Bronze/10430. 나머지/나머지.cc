#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    cout << (a + b) % c << "\n";
    cout << ((a % c) + (b % c)) % c << "\n";
    cout << (a * b) % c << "\n";
    cout << ((a % c) * (b % c)) % c << "\n";
}

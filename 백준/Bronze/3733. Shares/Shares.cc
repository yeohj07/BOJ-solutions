#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b;

    while(cin >> a >> b) {
        cout << b/(a+1) << "\n";
    }
}

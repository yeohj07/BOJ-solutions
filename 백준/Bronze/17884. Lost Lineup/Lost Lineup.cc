#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    v[0] = 1;

    for(int i=2; i<=N; i++) {
        int x; cin >> x;

        v[1 + x] = i;
    }

    for(int i=0; i<N; i++) cout << v[i] << " ";
}

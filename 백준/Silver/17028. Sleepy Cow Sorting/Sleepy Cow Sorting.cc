#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cnt = 1;
    for(int i=N-2; i>=0; i--) {
        if(v[i] < v[i+1]) cnt++;
        else break;
    }

    cout << N - cnt << "\n";
}

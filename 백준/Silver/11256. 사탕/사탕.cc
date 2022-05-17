#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int K, N; cin >> K >> N;

        vector<int> v;
        for(int i=0; i<N; i++) {
            int a, b; cin >> a >> b;
            v.push_back(a*b);
        }

        sort(v.begin(), v.end(), greater<int>());

        int sum = 0;
        for(int i=0; i<N; i++) {
            sum += v[i];

            if(sum >= K) {
                cout << i+1 << "\n";
                break;
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int M; cin >> M;

    while(M--) {
        int val; cin >> val;
        cout << upper_bound(arr.begin(), arr.end(), val) - lower_bound(arr.begin(), arr.end(), val) << " ";
    }
}

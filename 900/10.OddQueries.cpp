#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    long long total = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    // build 1-indexed prefix sums
    vector<long long> prefix(n+1, 0);
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + arr[i-1];
    }

    while(q--){
        int l, r;
        long long k;
        cin >> l >> r >> k;
        // sum of [l..r] in the original array
        long long origSegmentSum = prefix[r] - prefix[l-1];
        // total sum if we replace that segment by (r-l+1)*k
        long long newTotal = total - origSegmentSum + (long long)(r - l + 1) * k;
        cout << ( (newTotal & 1LL) ? "YES\n" : "NO\n" );
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

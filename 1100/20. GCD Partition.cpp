#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
 
	ll ans = 0; 
	ll total_sum = accumulate(arr.begin(), arr.end(), 0LL); 
	ll sum = 0; 

	for (int i = 0; i < n - 1; i++) {
		sum += arr[i];
		ans = max(ans, __gcd(total_sum - sum, sum));
	}

    cout << ans << endl;
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
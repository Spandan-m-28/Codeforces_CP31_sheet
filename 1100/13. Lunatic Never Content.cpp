#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
	cin >> n;
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
	}
	cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
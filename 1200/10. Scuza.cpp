#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    ll n,q;
    cin >> n >> q;

    vector<ll> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    vector<ll> questions(q);
    for(int i = 0;i < q;i++){
        cin >> questions[i];
    }

    vector<ll> preSum(n);
    vector<ll> pmax(n);
    preSum[0] = a[0];
    pmax[0] = a[0];
    for(int i = 1;i < n;i++){
        preSum[i] = preSum[i - 1] + a[i];
        pmax[i] = max(pmax[i - 1],a[i]);
    }

    for(int i = 0;i < q;i++){
        ll left = 0;
        ll right = n - 1;
        ll ans = 0;
        while (left <= right){
            ll mid = left + (right - left) / 2;

            if(pmax[mid] <= questions[i]){
                ans = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        
        cout << ans << " ";
    }

    cout << endl;

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
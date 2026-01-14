#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
<<<<<<< HEAD
    int n,k;
    cin >> n >> k;
    multiset<int> ms;
    for(int i = 0;i < n;i++){
        int temp;
        cin >> temp;
        ms.insert(temp);
    }

    int smallest = *ms.begin();
    ms.erase(ms.begin());
    int secondSmallest = *ms.begin();
    ms.erase(ms.begin());

    auto it = ds.end();
    it--;
    ds.erase(it);
=======
    ll n,k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    vector<ll> prefixSum(n);
    prefixSum[0] = arr[0];
    for(ll i = 1;i < n;i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    ll ans = 0;
    for(ll first = 0;first <= k;first++){
        ll second = k - first;
        ll left = 2 * first;
        ll right = n - second - 1;
        ll temp = prefixSum[right] - (left == 0?0:prefixSum[left - 1]);
        ans = max(ans,temp);
    }

    cout << ans << endl;
>>>>>>> 3d8579f3493d398ff9de028dfbdaee07efe52662

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

<<<<<<< HEAD
    int t;
=======
    ll t;
>>>>>>> 3d8579f3493d398ff9de028dfbdaee07efe52662
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
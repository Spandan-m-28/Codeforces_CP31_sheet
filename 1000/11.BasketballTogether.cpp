#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n ,d;
    cin >> n >> d;
    vector<ll> arr(n);
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans = 0;
    ll left = 0,right = n - 1;
    ll temp = arr[right];
    while(left <= right){
        while(left < right && temp <= d){
            temp += arr[right];
            left++;
        }
        if(temp > d){
            ans++;
        }
        right--;
        temp = arr[right];
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}
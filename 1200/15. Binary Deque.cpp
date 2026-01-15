#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n,s;
    cin >> n >> s;

    vector<ll> arr(n);
    ll sum = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    if(sum == s){
        cout << 0 << endl;
    }else if(sum < s){
        cout << -1 << endl;
    }else{
        ll left = 0;
        ll currSum = 0;
        ll maxLen = 0;
        for(ll right = 0;right < n;right++){
            currSum += arr[right];
            if(currSum == s)
                maxLen = max(maxLen,right - left + 1);
            
            while(currSum > s){
                currSum -= arr[left];
                left++;
            }
        }

        cout << n - maxLen << endl;
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
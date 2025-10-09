#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    
    int negatives = 0;
    bool hasZeros = false;
    ll smallest = INT_MAX;
    ll sum = 0;
    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] < 0){
            negatives++;
        }

        if(arr[i] == 0){
            hasZeros = true;
        }

        smallest = min(smallest,abs(arr[i]));

        sum += abs(arr[i]);
    }

    //Has even negatives
    if(hasZeros || negatives % 2 == 0){
        cout << sum << endl;
    }else{
        //has odd negatives
        cout << sum - (2 * smallest) << endl;
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
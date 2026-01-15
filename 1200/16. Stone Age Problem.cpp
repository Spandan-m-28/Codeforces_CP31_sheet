#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n,q;
    cin >> n >> q;

    vector<pair<ll,ll>> arr(n);
    ll sum = 0;
    for(int i = 0;i < n;i++){
        ll x;
        cin >> x;
        sum += x;
        arr[i] = {x,0};
    }

    vector<vector<ll>> queries;
    for(int it = 0;it < q;it++){
        ll t;
        cin >> t;
        if(t == 1){
            ll i,x;
            cin >> i >> x;
            queries.push_back({t,i - 1,x});
        }else{
            ll x;
            cin >> x;
            queries.push_back({t,x});
        }
    }

    pair<ll,ll> lastUpdated = {0,-1};
    int j = 1;
    for(auto it : queries){
        ll t = it[0];
        if(t == 1){
            ll i = it[1];
            ll x = it[2];

            ll old;
            if(arr[i].second > lastUpdated.second)
                old = arr[i].first;
            else
                old = lastUpdated.first;

            sum += (x - old);
            cout << sum << endl;
            
            arr[i] = {x,j};
        }else{
            ll x = it[1];

            cout << x * n << endl;
            sum = x * n;
            lastUpdated = {x,j};
        }
        j++;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    solve();
    // }
    return 0;
}
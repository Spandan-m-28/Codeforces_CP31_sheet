#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n,m;
    cin >> n >> m;

    vector<ll> arr(m);
    for(int i = 0;i < m;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    priority_queue<ll> pq;
    pq.push(arr[0] + n - arr[m - 1] - 1);
    for(int i = 1;i < m;i++){
        ll interval = arr[i] - arr[i - 1] - 1;
        
        pq.push(interval);
    }

    ll day = 0;
    ll protectedHouses = 0;
    while(!pq.empty()){
        ll interval = pq.top();
        pq.pop();

        ll temp = interval - 2 * day;

        if (temp <= 0) continue;

        if(temp == 1){
            protectedHouses += 1;
            day += 1;
        }else{
            protectedHouses += temp - 1;
            day += 2;
        }
    }

    cout << n - protectedHouses << endl;

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
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n ,c;
    cin >> n >> c;
    vector<int> arr(n);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        pq.push(x + i + 1);
    }

    int currCoins = c;
    int teleports = 0;
    while(!pq.empty()){
        int price = pq.top();
        pq.pop();

        if(price <= currCoins){
            teleports++;
            currCoins -= price;
        }
    }

    cout << teleports << endl;

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
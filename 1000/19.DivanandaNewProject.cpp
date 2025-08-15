#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    priority_queue<pair<int,int>> q; // {visits, original index}
    for(int i = 1; i <= n; i++){ // start from 1 so HQ is 0
        int tp;
        cin >> tp;
        q.push({tp, i});
    }
    
    vector<int> arr(n+1, 0); // coordinates (0..n), HQ at index 0
    bool flag = true; // true = assign to +, false = assign to -
    int dist = 1;
    ll time = 0;

    while(!q.empty()){
        auto curr = q.top();
        q.pop();
        int visits = curr.first;
        int idx = curr.second; // original building id
        
        if(flag){
            arr[idx] = dist;
            flag = false;
        } else {
            arr[idx] = -dist;
            flag = true;
            dist++; // move further after placing on left
        }
        time += (2LL * abs(arr[idx])) * visits;
    }

    cout << time << "\n";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
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

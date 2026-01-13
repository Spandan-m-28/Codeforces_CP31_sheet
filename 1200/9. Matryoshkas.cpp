#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    multiset<ll> st;
    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }

    ll ans = 0;
    while(!st.empty()){
        ll temp = *st.begin();
        auto it = st.find(temp);
        st.erase(it);
        while(st.find(temp + 1) != st.end()){
            it = st.find(temp + 1);
            st.erase(it);
            temp = temp + 1;
        }
        ans++;
    }

    cout << ans << endl;
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
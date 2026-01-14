#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    vector<ll> x(n);
    for(int i = 0;i < n;i++){
        cin >> x[i];
    }

    vector<ll> y(n);
    for(int i = 0;i < n;i++){
        cin >> y[i];
    }

    multiset<ll> st;
    for(int i = 0;i < n;i++){
        st.insert(y[i] - x[i]);
    }

    ll ans = 0;
    while(!st.empty() && *st.begin() < 0){
        ll neg = *st.begin();
        st.erase(st.find(neg));

        auto temp = st.lower_bound(abs(neg));
        if(temp != st.end()){
            ans++;
            st.erase(temp);
        }
    }

    ll pos = 0;
    for(int n : st){
        if(n >= 0){
            pos++;
        }
    }

    if(pos % 2 == 0)
        ans += (pos / 2);
    else
        ans += ((pos - 1) / 2);
    
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
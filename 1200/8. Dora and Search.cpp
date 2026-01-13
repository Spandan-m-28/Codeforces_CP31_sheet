#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    set<ll> st;
    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }

    ll i = 0;
    ll j = n - 1;
    while(i < j){
        if(arr[i] == *st.begin() || arr[i] == *st.rbegin()){
            st.erase(arr[i]);
            i++;
        }
        else if(arr[j] == *st.rbegin() || arr[j] == *st.begin()){
            st.erase(arr[j]);
            j--;
        }else{
            cout << i + 1 << " " << j + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
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
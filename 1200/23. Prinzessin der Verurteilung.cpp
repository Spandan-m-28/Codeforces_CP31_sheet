#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    string s;
    cin >> s;

    unordered_set<string> st;
    for(int i = 0;i < n;i++){
        string curr = "";
        for(int j = i;j < n;j++){
            curr += s[j];
            st.insert(curr);
        }
    }

    string ans = "a";
    while(ans.size() < 1001){
        if(st.find(ans) == st.end()){
            cout << ans << endl;
            return;
        }
        
        ll i = ans.size() - 1;

        while(i >= 0 && ans[i] == 'z'){
            ans[i] = 'a';
            i--;
        }

        if(i < 0){
            ans = 'a' + ans;
        }else{
            ans[i]++;
        }
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
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(is_sorted(s.begin(),s.end())){
        cout << "NO" << endl;
        return;
    }

    for(int i = 1;i < n;i++){
        if(s[i] < s[i - 1]){
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
            break;
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
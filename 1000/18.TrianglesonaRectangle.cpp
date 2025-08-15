#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll w,h;
    cin >> w >> h;
    ll k;
    
    ll bottomLine;
    cin >> bottomLine;
    vector<ll> bottom(bottomLine);
    for(ll i = 0;i < bottomLine;i++){
        cin >> bottom[i];
    }

    ll topLine;
    cin >> topLine;
    vector<ll> top(topLine);
    for(ll i = 0;i < topLine;i++){
        cin >> top[i];
    }

    ll leftLine;
    cin >> leftLine;
    vector<ll> left(leftLine);
    for(ll i = 0;i < leftLine;i++){
        cin >> left[i];
    }

    ll rightLine;
    cin >> rightLine;
    vector<ll> right(rightLine);
    for(ll i = 0;i < rightLine;i++){
        cin >> right[i];
    }

    ll maxOfHorizontal = h * (max(bottom[bottomLine - 1] - bottom[0],top[topLine - 1] - top[0]));
    ll maxOfVertical = w * (max(left[leftLine - 1] - left[0],right[rightLine - 1] - right[0]));

    cout << max(maxOfHorizontal,maxOfVertical) << endl;
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
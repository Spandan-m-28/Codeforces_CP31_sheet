#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;
    multiset<int> ms;
    for(int i = 0;i < n;i++){
        int temp;
        cin >> temp;
        ms.insert(temp);
    }

    int smallest = *ms.begin();
    ms.erase(ms.begin());
    int secondSmallest = *ms.begin();
    ms.erase(ms.begin());

    auto it = ds.end();
    it--;
    ds.erase(it);

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
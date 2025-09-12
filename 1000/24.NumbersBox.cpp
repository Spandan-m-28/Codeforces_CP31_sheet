#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n ,m;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m));
    long long sum = 0;
    int negatives = 0;
    int smallestAbs = INT_MAX;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> arr[i][j];
            sum += abs(arr[i][j]);
            if(arr[i][j] <= 0)
                negatives++;
            smallestAbs = min(abs(arr[i][j]),smallestAbs);
        }
    }

    if(negatives % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - (2 * smallestAbs) << endl;
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
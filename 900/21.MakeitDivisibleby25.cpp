#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int min_operations(string n,string possibleValue){
    int operations = 0;
    int possibleValueIndex = 1;
    for(int i = n.size() - 1;i >= 0;i--){
        if(n[i] == possibleValue[possibleValueIndex]){
            possibleValueIndex--;
            if(possibleValueIndex < 0){
                break;
            }
        }else{
            operations++;
        }
    }
    if(possibleValueIndex >= 0){
        return INT_MAX;
    }
    return operations;
}

void solve(){
    string n;
    cin >> n;
    vector<string> possibleValues = {"00" ,"25" ,"50","75"};
    int ans = INT_MAX;
    for(auto possibleValue : possibleValues){
        ans = min(ans,min_operations(n,possibleValue));
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
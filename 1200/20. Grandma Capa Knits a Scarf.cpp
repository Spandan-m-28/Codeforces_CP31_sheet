#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

int canBePalindromic(string& s,char c){
    int left = 0;
    int right = s.length() - 1;
    int del = 0;
    while(left <= right){
        if(s[left] == s[right]){
            left++;
            right--;
        }else if(s[left] == c){
            left++;
            del++;
        }else if(s[right] == c){
            right--;
            del++;
        }else{
            return -1;
        }
    }

    return del;
}

void solve(){
    int n;
    cin >> n;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    string s;
    cin >> s;

    int left = 0;
    int right = n - 1;
    while(left <= right && s[left] == s[right]){
        left++;
        right--;
    }

    if(left == right){
        cout << 0 << endl;
    }else{
        // Can be made palindromic by removing s[left] ??
        int temp1 = canBePalindromic(s,s[left]);
        // Can be made palindromic by removing s[right] ??
        int temp2 = canBePalindromic(s,s[right]);

        if(temp1 == -1 && temp2 == -1){
            cout << -1 << endl;
        }else if(temp1 == -1 && temp2 != -1){
            cout << temp2 << endl;
        }else if(temp2 == -1 && temp1 != -1){
            cout << temp1 << endl;
        }else{
            cout << min(temp1,temp2) << endl;
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
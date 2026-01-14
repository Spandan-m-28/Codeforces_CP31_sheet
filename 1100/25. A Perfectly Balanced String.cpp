<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    //int n;
    //cin >> n;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }
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
=======
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s; 
	int n = (int)s.size(); 
	set<char> c; 
	int k;

	for (k = 0; k < n; k++) { 
		if (c.find(s[k]) == c.end()) {
			c.insert(s[k]); 
		} else {
			break;
		}
	}

	for (int i = k; i < n; i++) { 
		if (s[i] != s[i - k]) {
			cout << "NO" << endl; 
			return;
		}
	}
	cout << "YES" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	int t = 1;
	cin >> t; // Read the number of test cases
	while (t--) {
		solve(); // Solve each test case
	}
}
>>>>>>> 3d8579f3493d398ff9de028dfbdaee07efe52662

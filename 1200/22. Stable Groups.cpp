#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n ,k,x;
	cin >> n >> k >> x;
	
	vector<ll> arr(n);
	for(int i = 0;i < n;i++){
	    cin >> arr[i];
	}
	
	sort(arr.begin(),arr.end());
	
	if(n == 1){
	    cout << 1 << endl;
	    return 0;
	}
    auto comp = [&](const pair<ll,ll>& a, const pair<ll,ll>& b) {
        ll reqA = (a.second - a.first - 1) / x;
        ll reqB = (b.second - b.first - 1) / x;
        return reqA > reqB;
    };


    
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,decltype(comp)> pq(comp);
	for(ll i = 0;i < n - 1;i++){
	    if(arr[i + 1] - arr[i] > x){
	        pq.push({arr[i],arr[i + 1]});
	    }
	}
	
	while(!pq.empty()){
	    auto it = pq.top();
	    ll req = (it.second - it.first - 1) / x;
	    if(req > k)
	        break;
	    pq.pop();
	    k -= req;
	}
	
	cout << pq.size() + 1 << endl;
    
    return 0;

}
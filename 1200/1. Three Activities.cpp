#include <bits/stdc++.h>
using namespace std;

vector<int> find3Max(vector<int> &arr) {
    vector<pair<int, int>> temp;
    for (int i = 0; i < arr.size(); i++) {
        temp.push_back({arr[i], i});
    }
    sort(temp.rbegin(), temp.rend());

    vector<int> ans;
    for (int i = 0; i < min(3, (int)temp.size()); i++) {
        ans.push_back(temp[i].second);
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    int totalFriends = 0;
    vector<int> maxA = find3Max(a);
    vector<int> maxB = find3Max(b);
    vector<int> maxC = find3Max(c);

    for (int i = 0; i < maxA.size(); i++) {
        for (int j = 0; j < maxB.size(); j++) {
            for (int k = 0; k < maxC.size(); k++) {
                int x = maxA[i], y = maxB[j], z = maxC[k];
                if (x == y || y == z || z == x) continue;
                totalFriends = max(totalFriends, a[x] + b[y] + c[z]);
            }
        }
    }

    cout << totalFriends << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

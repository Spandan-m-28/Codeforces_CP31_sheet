#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> nums;
    for (int i = 1; i <= k; i++) {
        if (i != x)
            nums.push_back(i);
    }

    if (nums.empty()) {
        cout << "NO" << endl;
        return;
    }

    // Greedy: try to use the smallest available number
    int smallest = nums[0];
    if (n < smallest) {
        cout << "NO" << endl;
        return;
    }

    vector<int> result;
    while (n >= smallest) {
        result.push_back(smallest);
        n -= smallest;
    }

    if (n > 0) {
        // Try replacing elements to fit the sum
        bool done = false;
        for (int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - smallest;
            for (int j = 0; j < result.size(); j++) {
                if (diff <= n) {
                    result[j] = nums[i];
                    n -= diff;
                    if (n == 0) {
                        done = true;
                        break;
                    }
                }
            }
            if (done) break;
        }
    }

    if (n == 0) {
        cout << "YES\n" << result.size() << "\n";
        for (int num : result) cout << num << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}
    
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

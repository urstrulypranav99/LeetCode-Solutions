#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> odd_idx;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            odd_idx.push_back(i);
        }
    }

    // If total odd numbers count is even, the whole array is balanced
    if (odd_idx.size() % 2 == 0) {
        cout << n << "\n";
    } else {
        // Exclude prefix up to the first odd or suffix from the last odd
        int first_odd = odd_idx.front();
        int last_odd = odd_idx.back();
        int max_len = max(n - 1 - first_odd, last_odd);
        cout << max_len << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
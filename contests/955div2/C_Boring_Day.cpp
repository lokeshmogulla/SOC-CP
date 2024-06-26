#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_wins = 0;
        int start = 0;
        long long current_sum = 0;

        for (int end = 0; end < n; ++end) {
            current_sum += a[end];
            while (current_sum > r && start <= end) {
                current_sum -= a[start];
                start++;
            }
            if (current_sum >= l && current_sum <= r) {
                max_wins++;
                current_sum = 0; 
                start = end + 1; 
            }
        }

        cout << max_wins << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

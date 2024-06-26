#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        vector<int> a;
        int i = 0;
        
        while (x > 0) {
            if (x & 1) {
                if (i > 0 && a.back() == 1) {
                    a.push_back(0);
                    a.push_back(1);
                } else {
                    a.push_back(1);
                }
            } else {
                a.push_back(0);
            }
            x >>= 1;
            i++;
        }

        cout << a.size() << '\n';
        for (int j = 0; j < a.size(); j++) {
            cout << a[j] << (j == a.size() - 1 ? '\n' : ' ');
        }
    }

    return 0;
}

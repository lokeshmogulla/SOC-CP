#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        // Calculate the minimum required length to have K distinct islands
        int S = (K * (K + 1)) / 2;
        S+=K-1;
        
        if (S > N) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}

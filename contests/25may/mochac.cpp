#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<long long> array(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> array[i];
        }
        long long m = LLONG_MIN;
        for (int i = 0; i < n-1; ++i) {
            if(array[i]<=array[i+1]){
                m = max(m,array[i]);
            }
            if(array[i]>=array[i+1]){
                m= max(m,array[i+1]);
            }
        }
        for (int i = 0; i < n-2; ++i) {
            if((array[i]<=array[i+1] && array[i]>=array[i+2]) || (array[i]>=array[i+1] && array[i]<=array[i+2])){
                m = max(m,array[i]);
            }
            if((array[i+1]<=array[i] && array[i+1]>=array[i+2]) || (array[i+1]>=array[i] && array[i+1]<=array[i+2])){
                m = max(m,array[i+1]);
            }
            if((array[i+2]<=array[i] && array[i+2]>=array[i+1]) || (array[i+2]>=array[i] && array[i+2]<=array[i+1])){
                m = max(m,array[i+2]);
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
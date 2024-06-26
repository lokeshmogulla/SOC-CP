#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,q;
    cin>>n>>q;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        int l = -1,r=n;
        while(l+1<r){
            int mid = (l+r)/2;
            if(nums[mid]<=k){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        cout<<l+1<<endl;
    }
}
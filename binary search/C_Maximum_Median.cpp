#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int> nums;
bool check(int t){
    int ans = 0;
    for(int i=n/2;i<n;i++){
        if((t-nums[i])>0){
        ans+=(t-nums[i]);
        }
    }
    if(ans<=k){return true;}
    return false;
}
signed main(){
    cin>>n>>k;
    nums.resize(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int l = 0;
    int r = 1e10;
    while(l+1<r){
        int m = (l+r)/2;
        if(check(m)){
            l=m;
        }
        else{
            r =m;
        }
    }
    cout<<l<<endl;
}
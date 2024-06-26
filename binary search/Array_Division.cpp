#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int> nums;

bool check(int t){
    int ans = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(nums[i]>t){return false;}
        sum+=nums[i];
        if(sum>t){
            ans++;
            sum=0;
            i--;
        }
    }
    return ans<=k;
}
signed main(){
    cin>>n>>k;
    nums.resize(n);
    int l = 0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int r= 1e18;
    while(l+1<r){
        int m = (l+r)/2;
        if(check(m)){
            r=m;
        }
        else{
            l = m;
        }
    }
    cout<<r<<endl;
}
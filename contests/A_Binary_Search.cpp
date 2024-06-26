#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector<int>&nums, int x){
    int l = 0;
    int r = nums.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[mid]==x){
            return true;
        }
        else if(nums[mid]<x){
            l = mid +1;
        }
        else{
            r= mid-1;
        }
    }
    return false;
}
signed main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<k;i++){
        int query;
        cin>>query;
        if(check(nums,query)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}
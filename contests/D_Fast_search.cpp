#include <bits/stdc++.h>
using namespace std;

int closesttoRight(vector<int>& nums, int k){
        int l = -1,r=nums.size();
        while(l+1<r){
            int mid = (l+r)/2;
            if(nums[mid]<k){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        return r+1;
}
int closesttoLeft(vector<int>& nums, int k){
        int l = -1,r=nums.size();
        while(l+1<r){
            int mid = (l+r)/2;
            if(nums[mid]<=k){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        return l+1;
}
signed main(){
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
     cin>>nums[i];
   }
   sort(nums.begin(),nums.end());
   int q; cin>>q;
   for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        // cerr<<a<<" "<<b;
        cout<<(closesttoLeft(nums,b)-closesttoRight(nums,a)+1)<<" ";
   }
}
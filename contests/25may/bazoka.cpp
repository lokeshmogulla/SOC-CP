#include <bits/stdc++.h>
using namespace std;
int findPivotIndex(vector<int>& nums){
        
        if(nums[0]>nums[1]){
            return 1;
        }
        if(nums[nums.size()-2] >nums[nums.size()-1]){
            return nums.size()-1;
        }
        int low = 1;
        int high = nums.size()-2;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<nums[mid-1] ){
                return mid;
            }
            if(nums[mid]>nums[mid+1]){
                return mid+1;
            }
            else if(nums[mid]<nums[low]){
                high= mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int k = findPivotIndex(nums);
        int flag = true;
        for(int i=0;i<n-1;i++){
            if(nums[(i+k)%n]>nums[(i+k+1)%n]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
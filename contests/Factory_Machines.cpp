#include <bits/stdc++.h>
using namespace std;
#define int long long

int target;
bool check(int t,vector<int>&times,int size){
    int ans = 0;
    for(int i=0;i <size;i++){
        ans += (t/times[i]);
        if(ans>=target){
            break;
        }
    }
    if(ans >= target){
        return true;
    }
    return false;
}
signed main(){
    int n;
    cin>>n>>target;
    vector<int>times;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        times.push_back(a);
    }
    int l= 0;
    int r = 1;
    while(!check(r,times,n)){r *=2;};
    while(l+1<r){
        int m = (l+r)/2;
        if(check(m,times,n)){
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<r<<endl;
}  
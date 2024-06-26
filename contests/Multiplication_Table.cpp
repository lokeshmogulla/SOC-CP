#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
int target;
bool check(int t){
    int ans = 0;
    for(int i=0;i <n;i++){
        ans += min((t/(i+1)),n);
    }
   if(ans>=target){
    return true;
   }
   return false;
}
signed main(){
    cin>>n;
    target = (((n*n))/2)+1;
    int l= 1;
    int r = n*n;
    while(l+1<r){
        int m = (l+r)/2;
        if(check(m)){
            r=m;
        }
        else{
            l=m;
        }
    }
    cout<<r<<endl;
}  
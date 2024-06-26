#include <bits/stdc++.h>
using namespace std;
int n;
int k;
vector<int> d;
bool good(int m){
    int ans = 1;
    int sum = 0;
    for(int i=1;i<n;i++){
        sum+=(d[i]-d[i-1]);
        if(sum >= m){
            sum=0;
            ans++;
        }
    }
    
    return ans>=k;
}
signed main(){
    cin>>n>>k;
    d.resize(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    int l = 0;
    int r = 1e10;
    while(l+1<r){
        int m = (l+r)/2;
        if(good(m)){
            l=m;
        }
        else{
            r=m;
        }
    }
    cout<<l<<endl;
}
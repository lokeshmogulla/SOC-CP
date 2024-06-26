#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,h,w;
bool check(int t){
    return (t/h)*(t/w)>=n;
}
signed main(){
    // int w,h;
    cin>>w>>h>>n;
    int l= 0;
    int r = 1;
    while(!check(r)){r *=2;};
    while(l+1<r){
        int m = (l+r)/2;
        if(check(m)){
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<r<<endl;
}  
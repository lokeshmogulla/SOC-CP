#include <bits/stdc++.h>
using namespace std;
int n,x,y;
bool check(int t){
    if(x<y){
        return (t/x)+((t-x)/y) >=n;
    }
    else{
        return ((t-y)/x)+(t/y) >=n;
    }
}
signed main(){
    cin>>n>>x>>y;
    int l = 0;
    int r =1;
    while(!check(r)){r*=2;}
    while(l+1<r){
        int m = (l+r)/2;
        if(check(m)){
            r = m;
        }
        else{
            l=m;
        }
    }
    cout<<r<<endl;
    
}
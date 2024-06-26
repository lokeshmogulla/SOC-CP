#include <bits/stdc++.h>
using namespace std;

int n;
int target;
vector<int> lens;
bool check(double t){
    int ans = 0;
    for(int i=0;i <n;i++){
        ans += floor((lens[i]/t));
    }
    if(ans>=target){
        return true;
    }
   return false;
}
signed main(){
    cin>>n;
    cin>>target;
    lens.resize(n);
    for(int i=0;i<n;i++){
        cin>>lens[i];
    }
    double l= 0;
    double r = 1e8;
    cout<<setprecision(20);
    for(int i=0;i<100;i++){
        double m = (l+r)/2;
        if(check(m)){
            l=m;
        }
        else{
            r=m;
        }
    }
    cout<<l<<"\n";
}  
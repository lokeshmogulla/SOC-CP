#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll pow10(int n){
    ll ans = 1;
    for(int i=0;i<n;i++){ans*=10;}
    return ans;
}
int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        ll k;
        cin>>k;
        int n=1;
        while(k > 9*pow10(n-1)*n){
            k-=9*pow10(n-1)*n;
            n++;
        }
        ll num = (k-1)/n + pow10(n-1);
        int ind = (int)((k-1)%n);
        cout<<to_string(num)[ind]<<endl;

    }
}
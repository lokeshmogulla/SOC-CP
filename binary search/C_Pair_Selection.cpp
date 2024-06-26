#include<bits/stdc++.h>
using namespace std;
int n;
int k;
vector<pair<double,double>>a;
bool good(double m){
    vector<double>b(n);
    for(int i=0;i<n;i++){
        b[i]=(a[i].first*1.0)-(m*a[i].second*1.0);
    }
    sort(b.begin(),b.end(),greater<double>());
    double sum = 0;
    for(int i=0;i<k;i++){
        sum += b[i];
    }
    return (sum>=0);
}
signed main(){
    cin>>n>>k;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    double l = 0;
    double r = 1e6;
    cout<<setprecision(20);
    for(int iter =0;iter<100;iter++){
        double m = (l+r)/2.0;
        if(good(m)){
            l=m;
        }
        else{
            r=m;
        }
    }
    cout<<l<<endl;

}
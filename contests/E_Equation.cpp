#include <bits/stdc++.h>
using namespace std;

signed main(){
    double c;
    cin>>c;
    double l = 0;
    double r = 1e6;
    cout<<setprecision(20);
    for(int iter =0;iter<100;iter++){
        double m = (l+r)/2.0;
        if((m*m)+sqrt(m)<=c){
            l=m;
        }
        else{
            r=m;
        }
    }
    cout<<r<<endl;
}
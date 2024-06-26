#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int T;
    cin>>T;
    while(T>0){
        int x,y;
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
        T--;
    }

}
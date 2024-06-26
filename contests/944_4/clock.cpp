#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool result(int a, int b,int c){
    if(c>min(a,b) && c<max(a,b)){
        return true;
    }
    return false;
}

int main(){

    int T;
    cin>>T;
    while(T>0){
       int a,b,c,d;
       cin>>a>>b>>c>>d;

        if( (result(a,b,c) && !result(a,b,d)) || (!result(a,b,c) && result(a,b,d))){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        T--;
    }

}
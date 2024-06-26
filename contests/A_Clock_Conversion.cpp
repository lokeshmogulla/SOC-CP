#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        int h = (s[0]-'0')*10 + (s[1]-'0');
        int m  = (s[3]-'0')*10 + (s[4]-'0');
        int div = h/12;
        int rem = h%12;
        if (rem ==0)rem = 12;
        if(div==1){
            cout<<setw(2)<<setfill('0')<<rem<<":"<<setw(2)<<setfill('0')<<m<<" PM"<<endl;
        }
        else{
            cout<<setw(2)<<setfill('0')<<rem<<":"<<setw(2)<<setfill('0')<<m<<" AM"<<endl;
        }
    }
}

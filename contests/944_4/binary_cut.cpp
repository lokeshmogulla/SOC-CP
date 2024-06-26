#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int T;
    cin>>T;
    while(T>0){
        string s;
        cin >> s;
        int p1 =0;
        int p2 =0;
        int cnt =0;
        bool max_length =false;
        vector<int> zeroes;
        vector<int> ones;
        
        while(p1<s.length()){
            
            if(s[p1]=='0'){
                zeroes.push_back(p1);
                cnt++;
                while(p1 < s.length()-1 && s[p1]==s[p1+1] && s[p1]=='0'){
                    p1++;
                }
            }
            else {
                ones.push_back(p1);
                cnt++;
                
                while(p1 < s.length()-1 && s[p1]==s[p1+1] && s[p1]=='1'){
                    p1++;
                }
            }

            p1++;
        
        }
        if(zeroes.size()==0 || ones.size()==0){
            max_length =false;
        }
        else if(zeroes.size()==1 && ones.size()==1){
            if(ones[0] > zeroes[0]){
                max_length=true;
            }
        }
        else{
            max_length = true;
        }
        
        if(max_length){
            cout<<cnt-1<<endl;
        }
        else{
            cout<<cnt<<endl;
        }
        T--;
    }

}
#include <bits/stdc++.h>
using namespace std;
int x01,x02,y01,y02,n;
vector<pair<int,int>> fd;
#define int long long
signed main(){
 cin>>x01>>y01>>x02>>y02>>n;
 string s;
 cin>>s;
 fd.resize(n+1);
 fd[0]= make_pair(0,0);
 for(int i=0;i<n;i++){
    if(s[i]=='L'){
        fd[i+1]=make_pair(fd[i].first-1,fd[i].second);
    }
    if(s[i]=='R'){
        fd[i+1]=make_pair(fd[i].first+1,fd[i].second);
    }
    if(s[i]=='U'){
        fd[i+1]=make_pair(fd[i].first,fd[i].second+1);
    }
    if(s[i]=='D'){
        fd[i+1]=make_pair(fd[i].first,fd[i].second-1);
    }
 }
 int l = 0;
 int r = 1e18;
 while(l+1<r){
    int m = (l+r)/2;
    // cerr<<l<<" "<<r<<endl;
    bool good = false;
    int f_x = x01+(m/n)*fd[n].first + fd[(m%n)].first;
    int f_y = y01+(m/n)*fd[n].second + fd[(m%n)].second;
    good = (abs(x02-f_x)+abs(y02-f_y)<=m);
    if(good){
        r=m;
    }
    else{
        l= m;
    }
    
 }
 if(r==1e18){
    cout<< -1<<endl;
 }
 else{
 cout<<r<<endl;

 }

}
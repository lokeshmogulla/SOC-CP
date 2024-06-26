#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::bitset<32> binaryNumber(n);
        vector<int>ans;
        int first;
        for(int i=0;i<32;i++){
            if(binaryNumber[i]==1){
                first = i;
                break;
            }
            ans.push_back(binaryNumber[i]);

        }
        int last;
        for(int i=31;i>=0;i--){
            if(binaryNumber[i]==1){
                last = i;
                break;
            }

        }
        int ind = first;
        while(ind<32){
            if(ind < 31 && binaryNumber[ind]==1 && binaryNumber[ind+1] ==1){
                first = ind;
                while(ind<31){
                    if(ind <31 && !binaryNumber[ind] && !binaryNumber[ind+1]){
                        ans.push_back(1);
                        ans.push_back(0);
                        ind+=2;
                        break;
                    }
                    if(ind == first){
                        ans.push_back(-1);
                    }
                    else{
                        if(binaryNumber[ind]==1){
                            ans.push_back(0);
                        }
                        else{
                            ans.push_back(-1);
                        }
                    }
                    ind++;
                    
                }
            }
            else{
                if(ind<=last){
                    ans.push_back(binaryNumber[ind]);
                };
                ind++;
            }
            
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
        
           cout<<ans[i]<<" ";

        }
        cout<<endl;
    }
}
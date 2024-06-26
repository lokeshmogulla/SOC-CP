#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define double long double

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 
// *find_by_order, order_of_key

// ******************* DEBUGGER *******************
#ifndef ONLINE_JUDGE
#define db(x)            cerr << #x <<" "; _print(x); cerr << '\n';
#define gt(T)            cerr << "Case #" << T << ": " << '\n';
#else
#define db(x)
#define gt(T)            
#endif

void _print(int t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(bool t) {cerr << ((t)?"true":"false");}

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// ******************* DEBUGGER END *******************

/*

1. Think Greedy
2. Think Brute Force
3. Think solution in reverse order
4. Think DP [ check constraints carefully ]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph 

*/

const double PI = 3.1415926535;

void solve(int T)
{
    // gt(T);

    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0;
    int x=0,res=LLONG_MAX;
    for(;r<n;r++){
        x+=a[r];
        while(x-a[l]>=s){
            x-=a[l];
            l++;
        }
        if(x>=s){
         res = min(res,r-l+1);
        }
    }
    if(res==LLONG_MAX){
    cout<<"-1\n";
        return;
    }
    cout<<res<<endl;
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    // cin >> T;

    for(int i = 1; i <= T; i++)
        solve(i);

    return 0;
}
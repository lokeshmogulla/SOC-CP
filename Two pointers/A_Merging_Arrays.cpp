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
    gt(T);
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a(n1);
    vector<int>b(n2);
    vector<int>c;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    while(l<n1 || r<n2){
        if(r==n2 || (l<n1 && a[l]<b[r])){
            c.push_back(a[l]);
            l++;
        }
        else{
            c.push_back(b[r]);
            r++;
        }
    }
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";

    
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